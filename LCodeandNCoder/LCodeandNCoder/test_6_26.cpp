#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

//617合并二叉树
//Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
// 
//class Solution {
//public:
//	TreeNode* mergeTrees1(TreeNode* t1, TreeNode* t2) {
//		//讨论为空情况
//		if (t1 == NULL && t2 == NULL)
//			return NULL;
//		if (t1 == NULL)
//			return t2;
//		if (t2 == NULL)
//			return t1;
//
//		t1->val += t2->val;
//
//		//t1左为空将t2的左拿过来，不为空遍历
//		if (t1->left == NULL && t2->left != NULL)
//		{
//			t1->left = t2->left;
//		}
//		else
//		{
//			mergeTrees1(t1->left, t2->left);
//		}
//
//		//同上
//		if (t1->right == NULL && t2->right != NULL)
//		{
//			t1->right = t2->right;
//		}
//		else
//		{
//			mergeTrees1(t1->right, t2->right);
//		}
//
//		return t1;
//	}
//
//	TreeNode* mergeTrees2(TreeNode* t1, TreeNode* t2) {
//		if (t1 == NULL && t2 == NULL)
//			return NULL;
//		if (t1 == NULL)
//			return t2;
//		if (t2 == NULL)
//			return t1;
//		//if (t1 == NULL || t2 == NULL)
//		//	return t1 == NULL ? t2 : t1;
//
//		//此处直接获取返回值即可
//		t1->left = mergeTrees2(t1->left, t2->left);
//		t1->right = mergeTrees2(t1->right, t2->right);
//
//		t1->val += t2->val;
//
//		return t1;
//	}
//};

//461汉明距离
//class Solution {
//public:
//	int hammingDistance(int x, int y) {
//		int temp = x ^ y;
//		int count = 0;
//
//		while (temp)
//		{
//			if (temp & 1 == 1)
//				++count;
//
//			temp >>= 1;
//		}
//
//		return count;
//	}
//
//  //前一种方法必须完全查找temp的32位，本方法查找的次数取决于temp中1的个数，因此更高效
//	int hammingDistance1(int x, int y) {
//		int temp = x ^ y;
//		int count = 0;
//
//		while (temp)
//		{
//			++count;
//			//temp-1后temp中最右边的1变为0，1右边的0变为1，按位与后其他位不变最后一个1变为0
//			temp = temp & (temp - 1);
//		}
//
//		return count;
//	}
//};

// 226 翻转二叉树
//Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		if (root == nullptr)
//			return root;
//
//		//先遍历到根节点，从下向上交换
//		invertTree(root->left);
//		invertTree(root->right);
//
//		swap(root->left, root->right);
//
//		return root;
//	}
//
//	//迭代写法
//	TreeNode* invertTree1(TreeNode* root) {
//		if (root == nullptr)
//			return root;
//
//		//用队列保存还没有交换过得结点
//		queue<TreeNode*> tnq;
//		tnq.push(root);
//
//		while (!tnq.empty())
//		{
//			//拿出一个需要交换的结点
//			TreeNode* now = tnq.front();
//			tnq.pop();
//			swap(now->left, now->right);
//
//			//将当前结点不为空的子树存入队列中
//			if (now->left != nullptr)
//				tnq.push(now->left);
//			if (now->right != nullptr)
//				tnq.push(now->right);
//		}
//
//		return root;
//	}
//};