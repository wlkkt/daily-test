#include <iostream>
#include <vector>
#include <list>
using namespace std;

////////////////////////////一、vector的迭代器失效
//int main()//1 2 3 4 5 6 7 8 9
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


//int main()//1 2 3 4 6 7 8 9
//{
//	int array[] = { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9 };
//	int n = sizeof(array) / sizeof(int);
//	list<int> mylist(array, array + n);
//	auto it = mylist.begin();
//	while (it != mylist.end())
//	{
//		if (*it != 0)
//			cout << *it << " ";
//		else
//			it = mylist.erase(it);
//		++it;
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

//int main()
//{
//	int ar[] = { 0,1, 2, 3, 4,  5, 6, 7, 8, 9 };
//	int n = sizeof(ar) / sizeof(int);
//	list<int> mylist(ar, ar + n);
//	list<int>::iterator pos = find(mylist.begin(), mylist.end(), 5);
//	reverse(mylist.begin(), pos);
//	reverse(pos, mylist.end());
//	list<int>::const_reverse_iterator crit = mylist.crbegin();
//	while (crit != mylist.crend())
//	{
//		cout << *crit << " ";
//		++crit;
//	}
//	cout << endl;
//	return 0;
//}
//
class Solution 
{
public:
    string tmp;//字符串尾插
    vector<string> res;//将尾插好的字符串成组尾插给res
    vector<string> board = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
    void DFS(int pos, string digits)//深度优先遍历
    {
        if (pos == digits.size())//当digits的每个有效字符都递归并尾插后返回
        {
            res.push_back(tmp);
            return;
        }

        int num = digits[pos] - '0';

        for (int i = 0; i < board[num].size(); i++)
        {
            tmp.push_back(board[num][i]);
            DFS(pos + 1, digits);
            tmp.pop_back();//删除
        }
    }

 
        vector<string> letterCombinations(string digits)
        {
            if (digits.size() == 0)
            {
                return res;
            }
            DFS(0, digits);
            return res;
        }
};
