class Solution {
public:
    bool isPalindrome(int x) {
        long long revnum=0;
        int dub=x;
        if(x<0){
            return false;
        }
        while(x>0){
            int digit=x%10;
            if(revnum*10>INT_MAX){
                return 0;
            }
            revnum=revnum*10+digit;
            x/=10;
        }
        return (((int)revnum)==dub);
    }
};