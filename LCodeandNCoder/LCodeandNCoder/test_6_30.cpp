#include "commonly.h"

//309. ���������Ʊʱ�����䶳��
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
		//     �������������������������
		//sell     0	1    2   2   3
		//   ���������õ�����  
		//buy     -1   -1   -1   1   1
		//freeze   0	0    1   2   2
		for (int i = 1; i < n; ++i)
		{
			//״̬ת�Ʒ���
			//����             ��       ����   �������������
			sell[i] = max(sell[i - 1], buy[i-1]+prices[i]);
			//      ֮ǰ�����õ�����     ����ʱ������+�������������  
			buy[i] = max(buy[i - 1], freeze[i - 1] - prices[i]);
			// ��¼�������������ᣩʱ��õ��������ֵ           
			freeze[i] = max(freeze[i - 1], max(sell[i - 1], buy[i - 1]));
		}

		return sell.back();
	}
};