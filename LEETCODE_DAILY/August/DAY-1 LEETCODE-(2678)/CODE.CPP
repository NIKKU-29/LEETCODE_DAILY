#include<iostream.h>
#include<conio.h>
#include<math.h>
class Solution {
public:
    int countSeniors(vector<string>& details) {

        int count=0;
        for(int j=0;j<details.size();j++)
        {
    
        int curr=(details[j][11]-'0')*10 + (details[j][12]-'0');
        

        if(curr>60)
        {
            count++;
        }

        }
        
        return count;
    }
};