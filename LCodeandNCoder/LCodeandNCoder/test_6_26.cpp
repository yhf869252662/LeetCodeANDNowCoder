#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

//617�ϲ�������
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
//		//����Ϊ�����
//		if (t1 == NULL && t2 == NULL)
//			return NULL;
//		if (t1 == NULL)
//			return t2;
//		if (t2 == NULL)
//			return t1;
//
//		t1->val += t2->val;
//
//		//t1��Ϊ�ս�t2�����ù�������Ϊ�ձ���
//		if (t1->left == NULL && t2->left != NULL)
//		{
//			t1->left = t2->left;
//		}
//		else
//		{
//			mergeTrees1(t1->left, t2->left);
//		}
//
//		//ͬ��
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
//		//�˴�ֱ�ӻ�ȡ����ֵ����
//		t1->left = mergeTrees2(t1->left, t2->left);
//		t1->right = mergeTrees2(t1->right, t2->right);
//
//		t1->val += t2->val;
//
//		return t1;
//	}
//};

//461��������
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
//  //ǰһ�ַ���������ȫ����temp��32λ�����������ҵĴ���ȡ����temp��1�ĸ�������˸���Ч
//	int hammingDistance1(int x, int y) {
//		int temp = x ^ y;
//		int count = 0;
//
//		while (temp)
//		{
//			++count;
//			//temp-1��temp�����ұߵ�1��Ϊ0��1�ұߵ�0��Ϊ1����λ�������λ�������һ��1��Ϊ0
//			temp = temp & (temp - 1);
//		}
//
//		return count;
//	}
//};

// 226 ��ת������
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
//		//�ȱ��������ڵ㣬�������Ͻ���
//		invertTree(root->left);
//		invertTree(root->right);
//
//		swap(root->left, root->right);
//
//		return root;
//	}
//
//	//����д��
//	TreeNode* invertTree1(TreeNode* root) {
//		if (root == nullptr)
//			return root;
//
//		//�ö��б��滹û�н������ý��
//		queue<TreeNode*> tnq;
//		tnq.push(root);
//
//		while (!tnq.empty())
//		{
//			//�ó�һ����Ҫ�����Ľ��
//			TreeNode* now = tnq.front();
//			tnq.pop();
//			swap(now->left, now->right);
//
//			//����ǰ��㲻Ϊ�յ��������������
//			if (now->left != nullptr)
//				tnq.push(now->left);
//			if (now->right != nullptr)
//				tnq.push(now->right);
//		}
//
//		return root;
//	}
//};