#include "commonly.h"

//2 �������
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
//			if (p1->val >= 10)//��λ
//			{
//				p1->val -= 10;
//				flag = 1;//�����λ
//			}
//			prev = p1;
//			p1 = p1->next;
//			p2 = p2->next;
//		}
//
//		if (p1 == nullptr && p2 != nullptr)//��l2��ʣ�µĲ���l1
//		{
//			prev->next = p2;
//			p1 = prev->next;
//		}
//		else if (p1 == nullptr && p2 == nullptr && flag == 1)//����һ����λҪ���
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
//			//��Ӳ����ǽ�λ
//			p1->val += p2->val;
//			if (flag == 1)
//				p1->val += 1;
//
//			//��¼��λ
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
//			//��Ϊ��
//			if (p1->next == nullptr && p2->next == nullptr)
//			{
//				//�н�λ�ӽ��
//				if (flag == 1)
//				{
//					p1->next = new ListNode(1);
//				}
//				//����
//				break;
//			}
//			//p1Ϊ�գ�λ���٣���0
//			else if (p1->next == nullptr)
//			{
//				p1->next = new ListNode(0);
//			}
//			//p2Ϊ�գ�λ���٣�p2Ϊ0�ٴ�ѭ��
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