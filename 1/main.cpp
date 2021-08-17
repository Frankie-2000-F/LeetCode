#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int another_num = target - num;
            if (map.find(another_num) != map.end())
                return {map.find(another_num)->second, i};
            else
                map.insert(pair<int, int>(num, i));
        }
        return {};
    }
};

int main(){
    int n, target;
    Solution mySolution;
    vector<int> nums;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;
    vector<int> result = mySolution.twoSum(nums, target);
    cout << '[' << result[0] << ',' << result[1] << ']' << endl;
    return 0;

};
