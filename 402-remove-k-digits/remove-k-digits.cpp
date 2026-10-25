class Solution {
public:
    string removeKdigits(string num, int z) {
        if(num.size()==z) return "0";
        string ans="";
        vector<char>st;
        int count=0;
        for(int i=0;i<num.size();i++){
            while(!st.empty() && (st.back()-'0')>(num[i]-'0') && count<z){
                st.pop_back();
                count++;
            }
            st.push_back(num[i]);
        }
        while(count<z && !st.empty()){
            st.pop_back();
            count++;
        }
        int k=0;
        while(k<st.size() && st[k]=='0'){
            k++;
        }
        for(;k<st.size();k++){
            ans+=st[k];
        }
        if(ans=="") return "0";
        return ans;
    }
};