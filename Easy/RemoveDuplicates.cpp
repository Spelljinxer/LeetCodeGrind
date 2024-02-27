#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i< nums.size(); i++)
        {
          if(nums[i] != nums[i-1])
          {
            nums[j] = nums[i];
            j++;
          }
        }
        return j;
    }
};

int main()
{
  vector<int> nums = {1,1,2};
  Solution soln;
  cout << soln.removeDuplicates(nums);
  return 0;
}