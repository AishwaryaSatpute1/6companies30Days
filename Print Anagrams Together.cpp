#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
    unordered_map<string,vector<string>>m;
    vector<vector<string>>res;
    for(auto x : strs)
    {
        string temp = x;
        sort(temp.begin(),temp.end());
        m[temp].push_back(x);
    }
     for(auto x:m){
         res.push_back(x.second);
     }
     return res;
    }
};
