#include "commonly.h"

//121 买卖股票的最佳时机
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int max = 0;
//
//		//用每一个买入价格去匹配之后的卖出价格
//		for (int i = 0; i < prices.size(); ++i)
//		{
//			for (int j = i + 1; j < prices.size(); ++j)
//			{
//				//如果买入价比卖出价低，并且利润比之前记录的要高则保存
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
//			//寻找当前遇到的最小波谷
//			if (prices[i] < pmin)
//				pmin = prices[i];
//			else
//				continue;
//
//			//寻找当前遇到的最小波谷之后最大的波峰
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
//			//记录当前遇到的最小波谷
//			if (prices[i] < pmin)
//				pmin = prices[i];
//			//用最小波谷查询是否为最大波峰
//			else if (prices[i] - pmin > max)
//				max = prices[i] - pmin;
//		}
//
//		return max;
//	}
//};

// 122 买卖股票的最佳时机2
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int buy = -1;
//		int count = 0;
//		int size = prices.size();
//
//		//buy为买入股票的价格，-1代表没有买入股票
//		for (int i = 0; i < size-1; ++i)
//		{
//			//如果没有买入股票，并且之后会涨价，则买入
//			if (buy == -1 && prices[i] < prices[i+1])
//				buy = prices[i];
//			//已经买入股票，但之后会跌，则出售股票
//			else if (buy != -1 && prices[i] > prices[i+1])
//			{
//				count += prices[i] - buy;
//				buy = -1;
//			}
//		}
//		//最后一直在涨价，导致还有股票没有售出，则在最后一个价格出售
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
//			//只要有涨价就当作利润记录
//			if (prices[i] > prices[i - 1])
//				max += prices[i] - prices[i - 1];
//		}
//
//		//最后利润之和即为最大利润
//		return max;
//	}
//
//	//暴力法
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
//		//买入价
//		for (int i = s; i < prices.size(); ++i)
//		{
//			int imax = 0;
//			//找卖出价
//			for (int j = i + 1; j < prices.size(); ++j)
//			{
//				//如果当前有利润
//				if (prices[i] < prices[j])
//				{
//					//当前总利润   当前交易后之后的总利润       本次交易的利润
//					int temp = calculate(prices, j + 1) + prices[j] - prices[i];
//					//记录本买入价的最大利润
//					if (temp > imax)
//						imax = temp;
//				}
//			}
//			//全部的最大利润
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
//			//找一个买入价格
//			while (i < size - 1 && prices[i] >= prices[i + 1])
//				++i;
//			buy = prices[i];
//
//			//找一个卖出价格
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