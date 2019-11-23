#include "commonly.h"

////triangle
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) {
//		//自顶向下
//		if (triangle.empty())
//			return -1;
//		//记录每一个位置的最优解
//		vector<vector<int>> min_num(triangle);
//		int n = triangle.size();
//		for (int i = 1; i < n; ++i)
//		{
//			for (int j = 0; j <= i; ++j)
//			{
//				//处理左右边界
//				if (j == 0)
//					min_num[i][j] = min_num[i - 1][j];
//				else if (j == i)
//					min_num[i][j] = min_num[i - 1][j - 1];
//				else//选择上一次路径的最优解
//					min_num[i][j] = min(min_num[i - 1][j], min_num[i - 1][j - 1]);
//				//加上本次数值
//				min_num[i][j] += triangle[i][j];
//			}
//		}
//
//		//寻找到达最后一层的最优解
//		int ret = min_num[n-1][0];
//		for (auto k : min_num[n - 1])
//		{
//			if (k < ret)
//				ret = k;
//		}
//		return ret;
//	}
//	int minimumTotal1(vector<vector<int> > &triangle) {
//		//字底向上
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


