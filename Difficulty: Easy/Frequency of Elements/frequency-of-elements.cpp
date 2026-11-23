#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<int>> countFreq(std::vector<int>& arr) {
        std::unordered_map<int, int> freqMap;

        // Count frequencies of each element
        for (int num : arr) {
            freqMap[num]++;
        }

        std::vector<std::vector<int>> result;
        std::unordered_map<int, bool> visited;

        // To maintain the relative order of first appearance
        for (int num : arr) {
            if (!visited[num]) {
                result.push_back({num, freqMap[num]});
                visited[num] = true;
            }
        }

        return result;
    }
};