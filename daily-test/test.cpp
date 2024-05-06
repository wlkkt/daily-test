//#include <algorithm>
//#include <iostream>
//#include <iterator>
//#include <string>
//using namespace std;
//
//////////////////////////////一、vector的迭代器失效
////int main()//1 2 3 4 5 6 7 8 9
////{
////	int ar[] = { 1,2,3,4,0,5,6,7,8,9 };
////	int n = sizeof(ar) / sizeof(int);
////	vector<int> v(ar, ar + n);
////	vector<int>::iterator it = v.begin();
////	while (it != v.end())
////	{
////		if (*it != 0)
////		{
////			cout << *it;
////			++it;
////		}
////	
////		else
////		{
////			it = v.erase(it);
////		}
////		
////		
////	}
////	return 0;
////}
//
//
////int main()//1 2 3 4 6 7 8 9
////{
////	int array[] = { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9 };
////	int n = sizeof(array) / sizeof(int);
////	list<int> mylist(array, array + n);
////	auto it = mylist.begin();
////	while (it != mylist.end())
////	{
////		if (*it != 0)
////			cout << *it << " ";
////		else
////			it = mylist.erase(it);
////		++it;
////	}
////	return 0;
////}
//
//
////////////////////////////////二、显示 / 隐式调用构造
//
////class Base {
////public:
////    Base() {
////        cout << "Base constructor called." << endl;
////    }
////};
////
////class Derived : public Base {
////public:
////    Derived() { // 派生类未显式调用基类构造函数
////        cout << "Derived constructor called." << endl;
////    }
////};
////
////int main() {
////    Derived d;  // 创建派生对象
////}
//
//////////////////////////////
//
////int main()
////{
////	int ar[] = { 0,1, 2, 3, 4,  5, 6, 7, 8, 9 };
////	int n = sizeof(ar) / sizeof(int);
////	list<int> mylist(ar, ar + n);
////	list<int>::iterator pos = find(mylist.begin(), mylist.end(), 5);
////	reverse(mylist.begin(), pos);
////	reverse(pos, mylist.end());
////	list<int>::const_reverse_iterator crit = mylist.crbegin();
////	while (crit != mylist.crend())
////	{
////		cout << *crit << " ";
////		++crit;
////	}
////	cout << endl;
////	return 0;
////}
///////////////////////////////////////////////////////////////////////
////class Solution 
////{
////public:
////    string tmp;//字符串尾插
////    vector<string> res;//将尾插好的字符串成组尾插给res
////    vector<string> board = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
////    void DFS(int pos, string digits)//深度优先遍历
////    {
////        if (pos == digits.size())//当digits的每个有效字符都递归并尾插后返回
////        {
////            res.push_back(tmp);
////            return;
////        }
////
////        int num = digits[pos] - '0';
////
////        for (int i = 0; i < board[num].size(); i++)
////        {
////            tmp.push_back(board[num][i]);
////            DFS(pos + 1, digits);
////            tmp.pop_back();//删除
////        }
////    }
////
//// 
////        vector<string> letterCombinations(string digits)
////        {
////            if (digits.size() == 0)
////            {
////                return res;
////            }
////            DFS(0, digits);
////            return res;
////        }
////};
/////////////////////////////////////////////////////////////////消除相同字符:2024.4.15
////int main() 
////{
////        string a = {"abbba"};  
////        string::iterator it = a.begin();
////        while (it != a.end()-1)//-1防止迭代器越界
////        {
////            if ((*it) == *(++it))
////            {
////                cout << "正向删除一次" << endl;
////                it = a.erase(it - 1, it + 1);
////                while ((*it) == *(it - 1) && a[0] != a[1])
////                {
////                    it = a.erase(it - 1, it + 1);
////                    cout << "逆向删除一次" << endl;
////                }
////            }
////        }
////        if (a[0] == a[1])//处理aa相同的情况
////        {
////            a.erase(0, 2);
////            cout << "处理最后的相同字符" << endl;
////        }
////
////        if (a.empty())
////        {
////            cout << 0;
////        }
////        else
////        {
////            cout << a;
////        }
////    
////    return 0;
////}
//
//
////int main() {
////    string str, nstr;
////    cin >> str;
////    string::iterator it = str.begin();
////    while (it != str.end())
////    {
////        cout << *it;
////        ++it;
////    }
////    return 0;
////}
//
//
////
////union Un
////{
////	short s[7];
////	int n;
////};
////int main()
////{
////	printf("%d\n", sizeof(union Un));
////	return 0;
////}
#define _CRT_SECURE_NO_WARNINGS 1
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 20);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main()
{
	char arr1[] = { 1,2,3,4,5 };
	char arr2[] = { 1,3,5,7,9 };
	int ret = memcmp(arr1, arr2, 5);
	printf("%d ", ret);
	return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void* my_memmove(void* dest, const void* src, size_t n) {
    unsigned char* d = (unsigned char*)dest;
    const unsigned char* s = (const unsigned char*)src;
    if (d == s) {
        return d;
    }

    if (s + n < d || d + n < s) {  // 没有内存重叠
        while (n--) {
            *(d++) = *(s++);
        }
    }
    else {  // 存在内存重叠
        if (d < s) {  // 目标地址在源地址之前，从前向后拷贝
            while (n--) {
                *(d++) = *(s++);
            }
        }
        else {  // 目标地址在源地址之后，从后向前拷贝
            d += n - 1;
            s += n - 1;

            while (n--) {
                *(d--) = *(s--);
            }
        }
    }
    return dest;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    //my_memmove(arr+2, arr, 20);
    my_memmove(arr, arr + 2, 20);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}