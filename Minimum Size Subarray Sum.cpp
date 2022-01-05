class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& arr) {
     int i=0,j=0,mini=INT_MAX,sum=0;
        while(j<arr.size()){
            sum+=arr[j];
            if(sum<tar)
                j++;
        
       else if(sum>=tar){
           while(sum>=tar){
               mini=min(mini,j-i+1);
               sum-=arr[i];
               i++;
           }
           j++;
       }
        }
     
        return (mini==INT_MAX?0:mini);
    }
};