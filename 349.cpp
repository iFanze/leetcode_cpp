#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> allnums;
        for(int i : nums1)
            allnums.insert(i);
        vector<int> result;
        for(int i : nums2)
            if (allnums.find(i) != allnums.end()){
                result.push_back(i);
                allnums.erase(i);
            }
        return result;
    }
};