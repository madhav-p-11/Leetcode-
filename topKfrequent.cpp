class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> frequent;
            for (int num : nums) freq[num]++;
    
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
            for (auto& [num, count] :  frequent) {
                minHeap.push({count, num});
                if (minHeap.size() > k) minHeap.pop();
            }
    
            vector<int> result;
            while (!minHeap.empty()) {
                result.push_back(minHeap.top().second);
                minHeap.pop();
            }
            return result;
        }
    };
