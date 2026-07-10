class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }

        std::vector<std::pair<char, int>> freqVec(freqMap.begin(), freqMap.end());

        std::sort(freqVec.begin(), freqVec.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
            return a.second > b.second;
        });

        std::string result = "";
        for (const auto& p : freqVec) {
            result.append(p.second, p.first);
        }

        return result;
    }
};