#include "commonly.h"

////53.��������
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
//		nums.insert(nums.begin(), 0);//��һ��֮ǰ�ĺ�Ӧ��Ϊ0
//		size = nums.size();//����֮��Ҫ����size
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
//			//���֮ǰ�ĺ�С��0��������¼�����¿�ʼ��¼
//			if (sum <= 0)
//				sum = 0;
//			sum += nums[i];
//			//��¼��ǰ����
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
//			// F(i) = max(F(i-1) + array[i]��array[i])
//			sum = sum > 0 ? sum + nums[i] : nums[i];
//			// maxsum = max( maxsum��F(i))
//			max = sum > max ? sum : max;
//		}
//
//		return max;
//	}
//};
//
////����
//class Gloves {
//public:
//	int findMinimum(int n, vector<int> left, vector<int> right) {
//		// write code here
//		//����˼·
//		//ֻҪ��һֻ�ֵ�ÿһ����ɫ���õ�������һֻ��ֻ��������һֻ����
//		//�����ߵ�ֻ������
//		//����һֻ�������ٵ���ɫ��Ȼ�������������е����ף����õ�������һֻ�ֵ�������ɫ������
//		//���ѡ�����ٵ�һֻ��
//		int leftnum = 0, rightnum = 0;
//		int leftmin = 27, rightmin = 27;
//		int num = 0;//��¼��ֻ����������
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
//		//num���ߵ�ֻ������
//		//rightnum - rightmin + 1�������������ϴ���������ɫ��Ȼ���ڴ����ٵ���ɫ����һֻ�����õ���������ɫ������
//		//min(rightnum - rightmin + 1, leftnum - leftmin + 1)ѡ�����ٵ�һֻ��
//		//+1������һֻ�ֵ�������������һֻ
//		return num + min(rightnum - rightmin + 1, leftnum - leftmin + 1) + 1;
//	}
//};