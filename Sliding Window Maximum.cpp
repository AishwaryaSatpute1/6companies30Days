class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0,maxi = INT_MIN;
        multiset<int>pq;
        vector<int>ans;
        while(j<nums.size()){
            pq.insert(nums[j]);
            if(j-i+1 < k){
                j++;
            }else if(j-i+1 == k){
                auto it = pq.rbegin();
                ans.push_back(*it);
                pq.erase(pq.find(nums[i]));
                i++;
                j++;
            }
        }
        return ans;
    }
};