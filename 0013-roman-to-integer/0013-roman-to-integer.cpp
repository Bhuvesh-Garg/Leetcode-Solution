class Solution {
public:
    int romanToInt(string s) {
        int ans=0,add=0,last=0;
        for(int i=s.length()-1;i>=0;i--){
            add=0;
            if(s[i]=='I'){
                add=1;
                
            }
            else if(s[i]=='V'){
                add=5;
               
            }
            else if(s[i]=='X'){
                add=10;
                
            }
            else if(s[i]=='L'){
                add=50;
                
            }else if(s[i]=='C'){
                add=100;
               
            }else if(s[i]=='D'){
                add=500;
                
            }
            else if(s[i]=='M'){
                add=1000;
                
            }
            if(add<last){
                ans=ans-last+(last-add);
                continue;
            }
            ans+=add;
            last=add;
        }
        return ans;
        
    }
};