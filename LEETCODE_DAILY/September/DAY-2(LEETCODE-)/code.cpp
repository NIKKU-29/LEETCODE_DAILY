#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long chalkReplacer(vector<int>& chalk, int k) {

        long chalkUsedInOneCycle=0;

        for(auto elem : chalk)
        {  
           chalkUsedInOneCycle+=elem; 
        }

        long number=k%chalkUsedInOneCycle;
        int index=0;
        while(number>=chalk[index])
        {
            number-=chalk[index];
            index++;
        }


        return index;
        
    }
};