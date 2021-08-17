#include <iostream>


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit, overflow=0;
        ListNode* root = new ListNode(0);
        ListNode* CurrentNode = root;
        while(l1 || l2){
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + overflow;
            digit = sum % 10;
            overflow = sum / 10;
            CurrentNode->next = new ListNode(digit);
            CurrentNode = CurrentNode->next;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        if(overflow > 0)
            CurrentNode->next = new ListNode(1);
        return root->next;
    }
};

int main(){
    Solution mySolution;
}