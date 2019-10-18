#include "commonly.h"

//136.只出现一次的数字
//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//		for (int i = 1; i < nums.size(); ++i)
//		{
//			nums[0] ^= nums[i];
//		}
//
//		return nums[0];
//	}
//};

//169.求众数
//class Solution {
//public:
//	int majorityElement(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		size_t size = nums.size();
//
//		for (int i = 0; i < size; ++i)
//		{
//			int count = 1;
//			while (i < size - 1 && nums[i] == nums[i + 1])
//			{
//				++i;
//				++count;
//			}
//
//			if (count > size / 2)
//				return nums[i];
//		}
//
//		return 0;
//	}
//
//	int majorityElement1(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		size_t size = nums.size();
//
//		return nums[size / 2];
//
//	}
//
//	int majorityElement2(vector<int>& nums) {
//		int ret = nums[0];
//		int count = 0;
//
//		/*for (size_t i = 1; i < nums.size(); ++i)
//		{
//			if (nums[i] == ret)
//				++count;
//			else
//				--count;
//
//			if (count == 0)
//			{
//				ret = nums[i];
//				count = 1;
//			}
//		}*/
//
//		for (auto &i : nums)
//		{
//			if (count == 0)
//				ret = i;
//
//			count += (ret == i) ? 1 : -1;
//		}
//
//		return ret;
//	}
//};