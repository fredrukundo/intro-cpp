#include <iostream>
#include <vector>
using namespace std;
/*
   @question1:
         The Two Sum problem asks us to find two numbers in an array that sum up to a given target value.
         We need to return the indices of these two numbers
*/
class Solution{
   public:
      vector<int> twoSum(vector<int>& nums, int target) {
         int n = nums.size();

         for (int i = 0; i < n - 1; i++)
         {
            for (int j = i + 1; j < n; j++)
            {
               if (nums[i] == nums[j])
               {
                  return vector<int> (i, j);
               }
            }
         }
         return vector<int> ();
      }
};
