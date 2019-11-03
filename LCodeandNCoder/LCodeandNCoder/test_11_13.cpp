#include "commonly.h"

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		//STL使用
		auto it = nums.begin();
		size_t count = nums.size();
		while (count--)
		{
			if (*it == 0)
			{
				it = nums.erase(it);
				nums.push_back(0);
			}
			else
				++it;
		}
	}

	void moveZeroes1(vector<int>& nums) {
		for (int last = 0, i = 0; i < nums.size(); ++i)
		{
			if (nums[i] != 0)
				swap(nums[last++], nums[i]);//last记录非0区间
		}
	}
};