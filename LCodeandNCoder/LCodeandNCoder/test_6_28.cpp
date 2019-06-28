#include "commonly.h"

//15 三数之和
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		vector<vector<int>> ans;
//		int size = nums.size();
//		
//		sort(nums.begin(), nums.end());
//
//		//从数组的最右侧开始遍历
//		int i = size - 1;
//		while (i > 1)
//		{
//			//定义左右指针寻找其他两个值
//			int left = 0;
//			int right = i - 1;
//			int lflag = 0;
//			int rflag = 0;
//
//			while (left < right)
//			{
//				lflag = 0;
//				rflag = 0;
//
//				if (nums[left] + nums[right] + nums[i] == 0)
//				{
//					ans.push_back(vector<int> {nums[left], nums[right], nums[i]});
//					//相等时需要同时调整左右指针
//					++left;
//					--right;
//					//左右指针去重
//					lflag = 1;
//					rflag = 1;
//				}
//				//大于0将右侧指针向左移，找到更小的值
//				else if (nums[left] + nums[right] + nums[i] > 0)
//				{
//					--right;
//					rflag = 1;
//				}
//				//同上相反
//				else
//				{
//					++left;
//					lflag = 1;
//				}
//
//				//去除左右指针周围与他相同的值
//				if (rflag == 1)
//				{
//					while (right >= 0 && nums[right] == nums[right + 1])
//						--right;
//				}
//				if (lflag == 1)
//				{
//					while (left < size && nums[left] == nums[left - 1])
//						++left;
//				}
//			}
//
//			--i;
//			//去除数左侧与他相同的值
//			while (i > 1 && nums[i] == nums[i + 1])
//				--i;
//		}
//
//		return ans;
//	}
//
//	vector<vector<int>> threeSum1(vector<int>& nums) {
//		vector<vector<int>> ans;
//
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			int l = i + 1;
//			int r = nums.size() - 1;
//			if (nums[i] > 0)
//				break;
//			//对i去重
//			if (i > 0 && nums[i] == nums[i - 1])
//				continue;
//
//			while (l < r)
//			{
//				if (nums[l] + nums[r] == -nums[i])
//				{
//					//如果是i第一次判断，则找到的值就是唯一的
//					if (l == i + 1 || r == nums.size() - 1)
//					{
//						ans.push_back(vector<int> {nums[l], nums[r], nums[i]});
//						++l;
//						--r;
//					}
//					//左右去重
//					else if (nums[l] == nums[l - 1])
//					{
//						++l;
//					}
//					else if (nums[r] == nums[r + 1])
//					{
//						--r;
//					}
//					else
//					{
//						ans.push_back(vector<int> {nums[l], nums[r], nums[i]});
//						++l;
//						--r;
//					}
//				}
//				//大于0将右侧指针向左移，找到更小的值
//				else if (nums[l] + nums[r] > -nums[i])
//				{
//					--r;
//				}
//				//同上相反
//				else
//				{
//					++l;
//				}
//			}
//		}
//
//		return ans;
//	}
//};