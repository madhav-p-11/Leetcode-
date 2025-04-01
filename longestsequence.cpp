#include <iostream>
#include <map>
#include <vector>
#include<set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> numMap;

        // Insert all numbers into the map
        for (int num : nums) {
            numMap[num] = 1;  // Mark each number as present
        }

        int longest = 0;

        for (auto& pair : numMap) {  // Instead of structured binding
            int num = pair.first;    // Extract key (num)

            // If num-1 is not present, num is the start of a sequence
            if (numMap.find(num - 1) == numMap.end()) {
                int currentNum = num;
                int count = 1;

                // Traverse through the sequence
                while (numMap.find(currentNum + 1) != numMap.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int result = solution.longestConsecutive(nums);

    cout <<" consecutive sequence length: " << result << endl;

    return 0;
}
