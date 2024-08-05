class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth=0;

        for(auto elem : logs)
        {
            if(elem=="../" )
            {
                if(depth!=0) depth--;
                else continue;
            }

            else if(elem=="./") continue;

            else{
                depth++;
                }
        }

     return depth;   
    }
};