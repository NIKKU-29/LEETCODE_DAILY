class Solution {
public:
    int passThePillow(int n, int time) {

        int total=2*n-2;
        int remaining = time%total;
        int bin=abs(n-1-remaining);

        return n-bin;
        
    }
};