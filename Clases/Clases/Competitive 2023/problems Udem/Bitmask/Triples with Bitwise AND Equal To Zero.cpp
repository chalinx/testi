#include <iostream>
#include <vector>
#include <unordered_map>

int countTriplets(const std::vector<int>& nums) {
    int n = nums.size();
    std::unordered_map<int, int> count;
    
    // Precompute the AND results for all pairs
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            count[nums[i] & nums[j]]++;
        }
    }

    int triplets = 0;
    // Count triples where the AND result with k is 0
    for (int k = 0; k < n; ++k) {
        for (auto &[key, value] : count) {
            if ((key & nums[k]) == 0) {
                triplets += value;
            }
        }
    }

    return triplets;
}

int main() {

    freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
    std::vector<int> nums = {2, 1, 3};
    std::cout << "Number of AND triples: " << countTriplets(nums) << std::endl;
    return 0;
}
