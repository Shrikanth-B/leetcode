class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||ch=='I' || ch=='O' ||ch=='U'){
            return true;
        }
    return false;
    }
    string reverseVowels(string s) {
        int st=0,end=s.length()-1;
        while(st<end){
            if(!isvowel(s[st])){
                st++;
                continue;
            }
            if(!isvowel(s[end])){
                end--;
                continue;
            }
            swap(s[st],s[end]);
            st++,end--;
        }
        return s;
    }
};