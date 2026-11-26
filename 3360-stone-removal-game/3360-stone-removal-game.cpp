class Solution {
public:
    bool canAliceWin(int n) {
        int i=10;

        int alice=false;

        while(n>=i){
            alice=!alice;

            n=n-i;
            i--;
        }

        return alice;
    }
};