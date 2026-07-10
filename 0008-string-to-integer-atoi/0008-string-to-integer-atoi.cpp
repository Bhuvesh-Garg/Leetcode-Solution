class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int is=0;
        int sign=1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(is==0){
                    continue;
                }
                if(is==1){
                break;
                }
                
            }
            if(s[i]=='-'){
                if(is==0){
                    sign=-1;
                    is=1;
                    continue;
                }
                else if(is==1){
                break;
                }
            }
            if(s[i]=='+'){
                if(is==0){
                    is=1;
                    continue;
                }
                else if(is==1){
                break;
                }
            }
            switch(s[i]){
                case '0': ans*=10; break;
                case '1':   ans*=10 ;
                            ans+=1;
                            break;
                case '2':  ans*=10 ;
                            ans+=2;
                            break;
                case '3':  ans*=10 ;
                            ans+=3;
                            break;
                case '4':  ans*=10 ;
                            ans+=4;
                            break;
                case '5':  ans*=10 ;
                            ans+=5;
                            break;
                case '6':  ans*=10 ;
                            ans+=6;
                            break;
                case '7':  ans*=10 ;
                            ans+=7;
                            break;
                case '8':  ans*=10 ;
                            ans+=8;
                            break;
                case '9':  ans*=10 ;
                            ans+=9;
                            break;
                default :  goto exit_loop;
            }
            if(ans>INT_MAX){
                break;
            }
            
            is=1;}
        
        exit_loop:
        ans=ans*sign;
        if(ans>2147483647){
            ans=2147483647;
        }
        else if(ans<-2147483648){
            ans=-2147483648;
        }
        return (int)ans;
    }
};