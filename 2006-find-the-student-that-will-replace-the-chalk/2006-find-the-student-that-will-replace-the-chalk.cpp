class Solution {
public:
    long chalkReplacer(vector<int>& chalk, int k) {

        long chalkUsedInOneCycle=accumulate(chalk.begin(),chalk.end(),0L);
        
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