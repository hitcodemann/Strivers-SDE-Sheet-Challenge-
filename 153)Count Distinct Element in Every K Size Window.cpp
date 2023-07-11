#include <iostream>
#include <vector>
#include <unordered_map>
std::vector<int> countDistinctElements(std::vector<int>& arr, int k) {
    std::vector<int> result;
    std::unordered_map<int, int> frequencyMap;
    for (int i = 0; i < k; i++) {
        frequencyMap[arr[i]]++;
    }
    result.push_back(frequencyMap.size());
    for (int i = k; i < arr.size(); i++) {
        frequencyMap[arr[i - k]]--;
        if (frequencyMap[arr[i - k]] == 0) {
          frequencyMap.erase(arr[i - k]);
        }
        frequencyMap[arr[i]]++;
        result.push_back(frequencyMap.size());
    }
    return result;
}
