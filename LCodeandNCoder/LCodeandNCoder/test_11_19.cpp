////跳石板
////小易来到了一条石板路前，每块石板上从1挨着编号为：1、2、3.......
////这条石板路要根据特殊的规则才能前进：对于小易当前所在的编号为K的 石板，小易单次只能往前跳K的一个约数(不含1和K)步，即跳到K + X(X为K的一个非1和本身的约数)的位置。 小易当前处在编号为N的石板，他想跳到编号恰好为M的石板去，小易想知道最少需要跳跃几次可以到达。
////例如：
////N = 4，M = 24：
////4->6->8->12->18->24
////于是小易最少需要跳跃5次，就可以从4号石板跳到24号石板
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int Solve(int n, int m)
//{
//	vector<int> dup(m + 1, 0);//记录到每一个编号的跳板所需要的次数
//	vector<int> lattice(m);//记录跳跳板的路径
//	int num = 0;
//	lattice[num++] = n;//记录起点
//
//	for (int i = 0; i < num; ++i)//循环进入下一个能跳到的跳板
//	{
//		int x = lattice[i];//当前跳板
//		for (int j = 2; j <= sqrt(x); ++j)
//		{
//			if (x%j == 0)//按约数计算下一个跳板位置
//			{
//				int y = x + j;
//				if (y <= m && dup[y] == 0)
//				{
//					dup[y] = dup[x] + 1;//记录跳到当前跳板的次数
//					lattice[num++] = y;//记录能跳到的跳板编号
//				}
//				y = x + x / j;//另一个约数
//				if (y <= m && dup[y] == 0)
//				{
//					dup[y] = dup[x] + 1;
//					lattice[num++] = y;
//				}
//			}
//		}
//	}
//
//	return dup[m] == 0 ? -1 : dup[m];//到终点的次数，如果未到终点则返回0
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