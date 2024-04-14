#include <iostream>
#include <vector>
using namespace std;

////////////////////////////一、vector的迭代器失效
//int main()
//{
//	int ar[] = { 1,2,3,4,0,5,6,7,8,9 };
//	int n = sizeof(ar) / sizeof(int);
//	vector<int> v(ar, ar + n);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		if (*it != 0)
//		{
//			cout << *it;
//			++it;
//		}
//	
//		else
//		{
//			it = v.erase(it);
//		}
//		
//		
//	}
//	return 0;
//}



//////////////////////////////二、显示 / 隐式调用构造

//class Base {
//public:
//    Base() {
//        cout << "Base constructor called." << endl;
//    }
//};
//
//class Derived : public Base {
//public:
//    Derived() { // 派生类未显式调用基类构造函数
//        cout << "Derived constructor called." << endl;
//    }
//};
//
//int main() {
//    Derived d;  // 创建派生对象
//}

////////////////////////////