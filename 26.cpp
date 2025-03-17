#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
     int removeDuplicates(vector<int>& nums) {
       int i = 0;
   
       for (const int num : nums)
         if (i < 1 || num > nums[i - 1])
           nums[i++] = num;
   
       return i;
     }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}
