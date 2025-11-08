#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
      if (map.find(target - nums[i]) != map.end()) {
        return {map[target - nums[i]], i};
      }
      map[nums[i]] = i;
    };
    return {};
  }
};

int main() {
  vector<int> nums = {3, 2, 4};
  Solution obj;
  vector<int> indexes = obj.twoSum(nums, 6);

  for (int index : indexes) {
    cout << index << endl;
  }
}