class Solution {
public:
    bool checkString(string s) {
        bool isb=false;
        for(auto x:s){
            if(x=='b'){
                isb=true;
            }
            else if(x=='a'){
                if(isb){
                    return false;
                }
            }
        }
        return true;
    }
};