class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<int> ele;
        for(auto& pair : freq){
            ele.push_back(pair.first);
        }
        sort(ele.begin(),ele.end(),[&](int a,int b){
            return freq[a]>freq[b];
        });
        return vector<int>(ele.begin(),ele.begin()+k);

    }
};
