class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator it;
        priority_queue<pair<int, int>> pq;
        
        vector<int> v;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        for (it = m.begin(); it != m.end(); it++) {
            pq.push({-1 * it->second, it->first});
        }
        
        while(pq.size() > 0) {
            int freq = -1 * pq.top().first;
            int elem = pq.top().second;
            
            for (int i = 0; i < freq; i++) v.push_back(elem);
            pq.pop();
        }
        
        return v;
    }
};