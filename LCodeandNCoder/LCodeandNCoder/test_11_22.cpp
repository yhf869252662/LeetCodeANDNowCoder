#include "commonly.h"

////53.最大子序和
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int size = nums.size();
//		for (auto i = 1; i < size; ++i)
//		{
//			nums[i] += nums[i - 1];
//		}
//
//		int max = nums[0];
//		int sum = 0;
//		nums.insert(nums.begin(), 0);//第一个之前的和应该为0
//		size = nums.size();//插入之后还要更改size
//		for (auto i = 1; i < size; ++i)
//		{
//			for (auto j = i; j < size; ++j)
//			{
//				sum = nums[j] - nums[i - 1];
//				if (sum > max)
//					max = sum;
//			}
//		}
//
//		return max;
//	}
//	int maxSubArray1(vector<int>& nums) {
//		int sum = 0;
//		int max = nums[0];
//		for (size_t i = 0; i < nums.size(); ++i)
//		{
//			//如果之前的和小于0，则丢弃记录，重新开始记录
//			if (sum <= 0)
//				sum = 0;
//			sum += nums[i];
//			//记录当前最大和
//			if (sum > max)
//				max = sum;
//		}
//
//		return max;
//	}
//
//	int maxSubArray2(vector<int>& nums) {
//		int sum = 0;
//		int max = nums[0];
//		for (size_t i = 0; i < nums.size(); ++i)
//		{
//			// F(i) = max(F(i-1) + array[i]，array[i])
//			sum = sum > 0 ? sum + nums[i] : nums[i];
//			// maxsum = max( maxsum，F(i))
//			max = sum > max ? sum : max;
//		}
//
//		return max;
//	}
//};
//
////手套
//class Gloves {
//public:
//	int findMinimum(int n, vector<int> left, vector<int> right) {
//		// write code here
//		//解题思路
//		//只要将一只手的每一种颜色都拿到，则另一只手只需拿任意一只即可
//		//先拿走单只的手套
//		//拿走一只数量最少的颜色，然后拿走其他所有的手套，则拿到了其中一只手的所有颜色的手套
//		//最后选择最少的一只手
//		int leftnum = 0, rightnum = 0;
//		int leftmin = 27, rightmin = 27;
//		int num = 0;//记录单只的手套数量
//		for (int i = 0; i < n; ++i)
//		{
//			if (left[i] * right[i] == 0)
//				num += (left[i] + right[i]);
//			else
//			{
//				leftnum += left[i];
//				rightnum += right[i];
//				leftmin = left[i] < leftmin ? left[i] : leftmin;
//				rightmin = right[i] < rightmin ? right[i] : rightmin;
//			}
//		}
//		//num拿走单只的手套
//		//rightnum - rightmin + 1，先拿走其他较大数量的颜色，然后在从最少的颜色中拿一只，即拿到的所有颜色的手套
//		//min(rightnum - rightmin + 1, leftnum - leftmin + 1)选择最少的一只手
//		//+1，从另一只手的手套中任意拿一只
//		return num + min(rightnum - rightmin + 1, leftnum - leftmin + 1) + 1;
//	}
//};