#include "commonly.h"

//2 两数相加
//Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		if (!l1 || !l2)
//			return l1 == nullptr ? l2 : l1;
//
//		ListNode *p1 = l1;
//		ListNode *p2 = l2;
//		ListNode *prev = p1;
//		int flag = 0;
//
//		while (p1 && p2)
//		{
//			p1->val += (p2->val + flag);
//			flag = 0;
//			if (p1->val >= 10)//进位
//			{
//				p1->val -= 10;
//				flag = 1;//保存进位
//			}
//			prev = p1;
//			p1 = p1->next;
//			p2 = p2->next;
//		}
//
//		if (p1 == nullptr && p2 != nullptr)//将l2中剩下的并入l1
//		{
//			prev->next = p2;
//			p1 = prev->next;
//		}
//		else if (p1 == nullptr && p2 == nullptr && flag == 1)//还有一个进位要添加
//		{
//			ListNode *temp = new ListNode(1);
//			flag = 0;
//			prev->next = temp;
//		}
//		if (flag == 1)//(p2 == nullptr && p1 != nullptr && flag == 1) || (p1 == nullptr && p2 != nullptr && flag == 1)
//		{
//			p1->val += flag;
//			flag = 0;
//			while (p1 != nullptr && p1->val >= 10)
//			{
//				p1->val -= 10;
//				flag = 1;
//				prev = p1;
//				p1 = p1->next;
//				if (p1 != nullptr)
//				{
//					p1->val += flag;
//					flag = 0;
//				}
//			}
//			if (p1 == nullptr && flag == 1)
//			{
//				ListNode *temp = new ListNode(1);
//				flag = 0;
//				prev->next = temp;
//			}
//		}
//		
//		return l1;
//	}
//
//	ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
//		if (!l1 || !l2)
//			return l1 == nullptr ? l2 : l1;
//
//		ListNode *p1 = l1;
//		ListNode *p2 = l2;
//		int flag = 0;
//
//		while (1)
//		{
//			//相加并考虑进位
//			p1->val += p2->val;
//			if (flag == 1)
//				p1->val += 1;
//
//			//记录进位
//			if (p1->val >= 10)
//			{
//				flag = 1;
//				p1->val -= 10;
//			}
//			else
//			{
//				flag = 0;
//			}
//
//			//都为空
//			if (p1->next == nullptr && p2->next == nullptr)
//			{
//				//有进位加结点
//				if (flag == 1)
//				{
//					p1->next = new ListNode(1);
//				}
//				//结束
//				break;
//			}
//			//p1为空，位数少，补0
//			else if (p1->next == nullptr)
//			{
//				p1->next = new ListNode(0);
//			}
//			//p2为空，位数少，p2为0再次循环
//			else if (p2->next == nullptr)
//			{
//				p2->val = 0;
//				p1 = p1->next;
//				continue;
//			}
//			p1 = p1->next;
//			p2 = p2->next;
// 		}
//
//		return l1;
//	}
//};