

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool sol=false;
        int n=arr.size();

        for(int i=0;i<n-2;i++)
        {
            if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1)
            {
                sol=true;
                break;
            }
        }      
        return sol;
    }
};