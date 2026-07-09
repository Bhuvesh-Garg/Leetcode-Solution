class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        char last='!';
        if(!strs[0].empty()){
            char last=strs[0][0];
        }
        else{
            return ans;
        }
        int i=0,j=0;
        while(1){
            for(i=0;i<strs.size();i++){
                if(strs[i].empty()||j>=strs[i].size()){
                    return ans;
                }
                last=strs[0][j];
                if(strs[i][j]!=last){
                    return ans;
                }
            }
            ans+=last;
            j++;
        }
    }
};