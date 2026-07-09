class Solution {
public:
    string removeOuterParentheses(string s) {
        int count1=1,count2=0;
        bool yesno=false;
        string ans="";
        for(int i=1;i<s.length();i++){
            if(yesno){
                yesno=false;
                continue;
                
            }
            if(s[i]=='('){
                count1++;
            }
            if(s[i]==')'){
                count2++;
            }
            if(count1==count2){
                
                count1=1;
                count2=0;
                yesno=true;
               
            }
            else{
            ans+=s[i];
            }
        }
        return ans;
    }
};