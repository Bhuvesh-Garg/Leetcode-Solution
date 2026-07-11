class Solution {
public:
    
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            int freq[26] = {0};
            int countOfFreq[501] = {0};
            
            int maxFreq = 0;
            int minFreq = 0;
            
            for (int j = i; j < n; j++) {
                int idx = s[j] - 'a';
                int oldFreq = freq[idx];
                int newFreq = oldFreq + 1;
                
                freq[idx] = newFreq;
                
                if (oldFreq > 0) {
                    countOfFreq[oldFreq]--;
                }
                countOfFreq[newFreq]++;
                
                maxFreq = max(maxFreq, newFreq);
                
                if (oldFreq == minFreq && countOfFreq[oldFreq] == 0) {
                    minFreq = newFreq;
                } else if (newFreq < minFreq || minFreq == 0) {
                    minFreq = newFreq;
                }
                
                totalBeauty += (maxFreq - minFreq);
            }
        }
        
        return totalBeauty;
    }
};