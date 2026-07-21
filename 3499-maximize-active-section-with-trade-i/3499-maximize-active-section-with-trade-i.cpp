class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int totalOnes = 0;
        for (char ch : s) {
            if (ch == '1')
                totalOnes++;
        }

        s = "1" + s + "1";

        vector<pair<char, int>> runs;

        int i = 0;
        while (i < s.size()) {
            char ch = s[i];
            int len = 0;

            while (i < s.size() && s[i] == ch) {
                len++;
                i++;
            }

            runs.push_back({ch, len});
        }

        int bestGain = 0;

        // Look for: Zero | One | Zero
        for (int i = 1; i + 1 < runs.size(); i++) {
            if (runs[i].first == '1' &&
                runs[i - 1].first == '0' &&
                runs[i + 1].first == '0') {

                bestGain = max(bestGain,
                               runs[i - 1].second + runs[i + 1].second);
            }
        }

        return totalOnes + bestGain;
    }
};