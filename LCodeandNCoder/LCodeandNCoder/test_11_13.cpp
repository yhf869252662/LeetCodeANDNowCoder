#include "commonly.h"

//283 �ƶ�0
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		//STLʹ��
//		auto it = nums.begin();
//		size_t count = nums.size();
//		while (count--)
//		{
//			if (*it == 0)
//			{
//				it = nums.erase(it);
//				nums.push_back(0);
//			}
//			else
//				++it;
//		}
//	}
//
//	void moveZeroes1(vector<int>& nums) {
//		for (int last = 0, i = 0; i < nums.size(); ++i)
//		{
//			if (nums[i] != 0)
//				swap(nums[last++], nums[i]);//last��¼��0����
//		}
//	}
//};

//538. �Ѷ���������ת��Ϊ�ۼ���
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	int count = 0;
	TreeNode* convertBST(TreeNode* root) {
		if (root == NULL)
			return root;

		convertBST(root->right);
		count += root->val;
		root->val = count;
		convertBST(root->left);

		return root;
	}

};