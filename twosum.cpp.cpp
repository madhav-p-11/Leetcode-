# include<iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
              std::unordered_map<int, int> num;
        
        for (int i = 0; i < nums.size(); i++) {
            int remainder = target - nums[i]; 
            
            
            if (num.find(remainder) != num.end()) {
                return {num[remainder], i}; 
            }
            
            num[nums[i]] = i;
        }
        
        return {}; 
    
    
        }
    };
    int main(){

        
        int n;
        cin>>n;
            vector<int> nums(n);
            int target;
            cin>>target; 
            for (int i = 0; i < n; i++) {
                std::cin >> nums[i];
            }
            Solution s;
            vector<int> result = s.twoSum(nums, target);
            cout << "[" << result[0] << ", " << result[1] << "]" << endl;
            
            return 0;
        
    }