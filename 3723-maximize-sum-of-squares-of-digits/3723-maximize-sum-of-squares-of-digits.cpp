class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        int n=num;
        if(sum<10){
            s+=(sum +'0');
                while(n>1){
                s+='0';
                n--;
            }
        }
        
        else{
            
            while(sum>=10){
                if(sum>=10 && n<=1){
                    return "";
                }
                s+=(9+'0');
                sum=sum-9;
                n--;
            }
            s+=(sum+'0');
        }
        while(n>1){
            s+='0';
            n--;
        }
        return s;
    }
};