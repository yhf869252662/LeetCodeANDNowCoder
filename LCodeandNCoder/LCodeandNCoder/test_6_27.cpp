#include "commonly.h"

//121 ������Ʊ�����ʱ��
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int max = 0;
//
//		//��ÿһ������۸�ȥƥ��֮��������۸�
//		for (int i = 0; i < prices.size(); ++i)
//		{
//			for (int j = i + 1; j < prices.size(); ++j)
//			{
//				//�������۱������۵ͣ����������֮ǰ��¼��Ҫ���򱣴�
//				int pri = prices[j] - prices[i];
//				if (pri > max)
//					max = pri;
//			}
//		}
//
//		return max;
//	}
//
//	int maxProfit1(vector<int>& prices) {
//		int max = 0;
//		int pmax = 0;
//		int pmin = INT32_MAX;
//
//		for (int i = 0; i < prices.size(); ++i)
//		{
//			//Ѱ�ҵ�ǰ��������С����
//			if (prices[i] < pmin)
//				pmin = prices[i];
//			else
//				continue;
//
//			//Ѱ�ҵ�ǰ��������С����֮�����Ĳ���
//			pmax = pmin;
//			for (int j = i + 1; j < prices.size(); ++j)
//			{
//				if (pmax < prices[j])
//					pmax = prices[j];
//			}
//			if (max < pmax - pmin)
//				max = pmax - pmin;
//		}
//
//		return max;
//	}
//
//	int maxProfit2(vector<int>& prices) {
//		int max = 0;
//		int pmin = INT32_MAX;
//
//		for (int i = 0; i < prices.size(); ++i)
//		{
//			//��¼��ǰ��������С����
//			if (prices[i] < pmin)
//				pmin = prices[i];
//			//����С���Ȳ�ѯ�Ƿ�Ϊ��󲨷�
//			else if (prices[i] - pmin > max)
//				max = prices[i] - pmin;
//		}
//
//		return max;
//	}
//};

// 122 ������Ʊ�����ʱ��2
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int buy = -1;
//		int count = 0;
//		int size = prices.size();
//
//		//buyΪ�����Ʊ�ļ۸�-1����û�������Ʊ
//		for (int i = 0; i < size-1; ++i)
//		{
//			//���û�������Ʊ������֮����Ǽۣ�������
//			if (buy == -1 && prices[i] < prices[i+1])
//				buy = prices[i];
//			//�Ѿ������Ʊ����֮����������۹�Ʊ
//			else if (buy != -1 && prices[i] > prices[i+1])
//			{
//				count += prices[i] - buy;
//				buy = -1;
//			}
//		}
//		//���һֱ���Ǽۣ����»��й�Ʊû���۳����������һ���۸����
//		if (buy != -1)
//		{
//			count += prices[size - 1] - buy;
//		}
//
//		return count;
//	}
//
//	int maxProfit1(vector<int>& prices) {
//		int max = 0;
//
//		for (int i = 1; i < prices.size(); ++i)
//		{
//			//ֻҪ���Ǽ۾͵��������¼
//			if (prices[i] > prices[i - 1])
//				max += prices[i] - prices[i - 1];
//		}
//
//		//�������֮�ͼ�Ϊ�������
//		return max;
//	}
//
//	//������
//	int maxProfit2(vector<int>& prices) {
//		return calculate(prices, 0);
//	}
//
//	int calculate(vector<int>& prices, int s)
//	{
//		if (s >= prices.size())
//			return 0;
//
//		int max = 0;
//		//�����
//		for (int i = s; i < prices.size(); ++i)
//		{
//			int imax = 0;
//			//��������
//			for (int j = i + 1; j < prices.size(); ++j)
//			{
//				//�����ǰ������
//				if (prices[i] < prices[j])
//				{
//					//��ǰ������   ��ǰ���׺�֮���������       ���ν��׵�����
//					int temp = calculate(prices, j + 1) + prices[j] - prices[i];
//					//��¼������۵��������
//					if (temp > imax)
//						imax = temp;
//				}
//			}
//			//ȫ�����������
//			if (imax > max)
//				max = imax;
//		}
//
//		return max;
//	}
//
//	int maxProfit3(vector<int>& prices) {
//		int max = 0;
//		int buy = 0;
//		int sell = 0;
//		int i = 0;
//		int size = prices.size();
//
//		while (i < size - 1)
//		{
//			//��һ������۸�
//			while (i < size - 1 && prices[i] >= prices[i + 1])
//				++i;
//			buy = prices[i];
//
//			//��һ�������۸�
//			while (i < size - 1 && prices[i] <= prices[i + 1])
//				++i;
//			sell = prices[i];
//
//			max += sell - buy;
//		}
//
//		return max;
//	}
//};