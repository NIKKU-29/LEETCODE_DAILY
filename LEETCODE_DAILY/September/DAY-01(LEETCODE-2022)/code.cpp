#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        if(m * n != original.size()) return {};

        int x=0;
        vector<vector<int>>ans;

        for(int i=0;i<m;i++)
        {
            vector<int>curr;
            
            for(int j=0;j<n;j++)
            {
                curr.push_back(original[x]);
                x++;
            }

            ans.push_back(curr);
        }
        
        return ans;
    }
};