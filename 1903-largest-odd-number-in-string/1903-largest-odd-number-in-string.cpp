class Solution {
public:
    string largestOddNumber(string num) {
        int current=INT_MIN;
        
        for(int i=num.length()-1;i>=0;i--){
            current=num.at(i)-48;
            if(current%2==1){
               return num.substr(0,i+1);;
            }
            
        }
        return "";
    }
};