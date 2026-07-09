class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.length()!=goal.length()){
        return false;
      }  
      if((s+s).contains(goal)){
        return true;
      }
      return false;

    }
};