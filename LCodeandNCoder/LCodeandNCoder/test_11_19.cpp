////��ʯ��
////С��������һ��ʯ��·ǰ��ÿ��ʯ���ϴ�1���ű��Ϊ��1��2��3.......
////����ʯ��·Ҫ��������Ĺ������ǰ��������С�׵�ǰ���ڵı��ΪK�� ʯ�壬С�׵���ֻ����ǰ��K��һ��Լ��(����1��K)����������K + X(XΪK��һ����1�ͱ����Լ��)��λ�á� С�׵�ǰ���ڱ��ΪN��ʯ�壬�����������ǡ��ΪM��ʯ��ȥ��С����֪��������Ҫ��Ծ���ο��Ե��
////���磺
////N = 4��M = 24��
////4->6->8->12->18->24
////����С��������Ҫ��Ծ5�Σ��Ϳ��Դ�4��ʯ������24��ʯ��
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int Solve(int n, int m)
//{
//	vector<int> dup(m + 1, 0);//��¼��ÿһ����ŵ���������Ҫ�Ĵ���
//	vector<int> lattice(m);//��¼�������·��
//	int num = 0;
//	lattice[num++] = n;//��¼���
//
//	for (int i = 0; i < num; ++i)//ѭ��������һ��������������
//	{
//		int x = lattice[i];//��ǰ����
//		for (int j = 2; j <= sqrt(x); ++j)
//		{
//			if (x%j == 0)//��Լ��������һ������λ��
//			{
//				int y = x + j;
//				if (y <= m && dup[y] == 0)
//				{
//					dup[y] = dup[x] + 1;//��¼������ǰ����Ĵ���
//					lattice[num++] = y;//��¼��������������
//				}
//				y = x + x / j;//��һ��Լ��
//				if (y <= m && dup[y] == 0)
//				{
//					dup[y] = dup[x] + 1;
//					lattice[num++] = y;
//				}
//			}
//		}
//	}
//
//	return dup[m] == 0 ? -1 : dup[m];//���յ�Ĵ��������δ���յ��򷵻�0
//}
//
//int main()
//{
//	int N = 0;
//	int M = 0;
//
//	while (cin >> N >> M)
//	{
//		if (N == M)
//			cout << 0 << endl;
//		else
//			cout << Solve(N, M) << endl;
//	}
//	return 0;
//}

//#include <iostream>
//
//template<class T>
//class A
//{
//public:
//	A(T b) : a(b)
//	{
//	}
//private:
//	T a;
//};
//
//template<class T>
//class B : public A<T>
//{
//public:
//	B(T c) : A<T>(c)
//	{
//	}
//};
//
//int main()
//{
//	//A<int> a;
//	B<int> b(0);
//	B<int> c(1);
//	return 0;
//}