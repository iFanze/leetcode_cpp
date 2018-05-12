#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums;
        vector<int> result;
        for(auto i : nums1)
            nums[i]++;
        for(auto i : nums2)
            if(nums[i]){
                result.push_back(i);
                nums[i]--;
            }
        return result;
    }
};