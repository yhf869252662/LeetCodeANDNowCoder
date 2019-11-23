#include "commonly.h"

////triangle
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) {
//		//�Զ�����
//		if (triangle.empty())
//			return -1;
//		//��¼ÿһ��λ�õ����Ž�
//		vector<vector<int>> min_num(triangle);
//		int n = triangle.size();
//		for (int i = 1; i < n; ++i)
//		{
//			for (int j = 0; j <= i; ++j)
//			{
//				//�������ұ߽�
//				if (j == 0)
//					min_num[i][j] = min_num[i - 1][j];
//				else if (j == i)
//					min_num[i][j] = min_num[i - 1][j - 1];
//				else//ѡ����һ��·�������Ž�
//					min_num[i][j] = min(min_num[i - 1][j], min_num[i - 1][j - 1]);
//				//���ϱ�����ֵ
//				min_num[i][j] += triangle[i][j];
//			}
//		}
//
//		//Ѱ�ҵ������һ������Ž�
//		int ret = min_num[n-1][0];
//		for (auto k : min_num[n - 1])
//		{
//			if (k < ret)
//				ret = k;
//		}
//		return ret;
//	}
//	int minimumTotal1(vector<vector<int> > &triangle) {
//		//�ֵ�����
//		if (triangle.empty())
//			return -1;
//		vector<vector<int>> min_num(triangle);
//		int n = triangle.size();
//		for (int i = n - 2; i >= 0; --i)
//		{
//			for (int j = 0; j <= i; ++j)
//			{
//				min_num[i][j] = min(min_num[i + 1][j], min_num[i + 1][j + 1]);
//				min_num[i][j] += triangle[i][j];
//			}
//		}
//		return min_num[0][0];
//	}
//};


