class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> numset(nums.begin(),nums.end());
        int lstreak = 0;
        for(int num : numset){
            if(numset.find(num-1) == numset.end()){
                int currentnum = num;
                int currentstreak = 1;
                while(numset.find(currentnum+1)!= numset.end()){
                    currentnum += 1;
                    currentstreak += 1;
                }
                lstreak = max(lstreak , currentstreak);
            }
        }
        return lstreak; 
    }
};
