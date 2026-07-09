class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr[128]={0};
        int grr[128]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]]=t[i];
            grr[t[i]]=s[i];

        }
        for(int i=0;i<s.length();i++){
            if(arr[s[i]]!=t[i]){
                return false;
            }
            if(grr[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};