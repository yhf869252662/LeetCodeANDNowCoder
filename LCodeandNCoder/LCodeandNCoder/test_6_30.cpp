#include "commonly.h"

//309. 最佳买卖股票时机含冷冻期
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.empty())
			return 0;

		int n = prices.size();
		vector<int> buy(n, 0);
		vector<int> sell(n, 0);
		vector<int> freeze(n, 0);


		buy[0] = -prices[0];
		//prices   1	2    3   0   2
		//     今天卖不卖出情况中最大的利润
		//sell     0	1    2   2   3
		//   今天买入获得的利润  
		//buy     -1   -1   -1   1   1
		//freeze   0	0    1   2   2
		for (int i = 1; i < n; ++i)
		{
			//状态转移方程
			//今天             卖       不卖   情况中最大的利润
			sell[i] = max(sell[i - 1], buy[i-1]+prices[i]);
			//      之前买入获得的利润     冻结时的利润+今天买入的利润  
			buy[i] = max(buy[i - 1], freeze[i - 1] - prices[i]);
			// 记录可能卖出（冻结）时获得的利润最大值           
			freeze[i] = max(freeze[i - 1], max(sell[i - 1], buy[i - 1]));
		}

		return sell.back();
	}
};