class Solution {
public:
    bool checkString(string s) {
        bool ans=false;
        for(char ch:s){
            if(ch=='b') ans=true;
            if(ans){
                if(ch=='a') return false;
            }
        }
        return true;
    }
};