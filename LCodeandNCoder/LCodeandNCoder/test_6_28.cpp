#include "commonly.h"

//15 ����֮��
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		vector<vector<int>> ans;
//		int size = nums.size();
//		
//		sort(nums.begin(), nums.end());
//
//		//����������Ҳ࿪ʼ����
//		int i = size - 1;
//		while (i > 1)
//		{
//			//��������ָ��Ѱ����������ֵ
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
//					//���ʱ��Ҫͬʱ��������ָ��
//					++left;
//					--right;
//					//����ָ��ȥ��
//					lflag = 1;
//					rflag = 1;
//				}
//				//����0���Ҳ�ָ�������ƣ��ҵ���С��ֵ
//				else if (nums[left] + nums[right] + nums[i] > 0)
//				{
//					--right;
//					rflag = 1;
//				}
//				//ͬ���෴
//				else
//				{
//					++left;
//					lflag = 1;
//				}
//
//				//ȥ������ָ����Χ������ͬ��ֵ
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
//			//ȥ�������������ͬ��ֵ
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
//			//��iȥ��
//			if (i > 0 && nums[i] == nums[i - 1])
//				continue;
//
//			while (l < r)
//			{
//				if (nums[l] + nums[r] == -nums[i])
//				{
//					//�����i��һ���жϣ����ҵ���ֵ����Ψһ��
//					if (l == i + 1 || r == nums.size() - 1)
//					{
//						ans.push_back(vector<int> {nums[l], nums[r], nums[i]});
//						++l;
//						--r;
//					}
//					//����ȥ��
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
//				//����0���Ҳ�ָ�������ƣ��ҵ���С��ֵ
//				else if (nums[l] + nums[r] > -nums[i])
//				{
//					--r;
//				}
//				//ͬ���෴
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