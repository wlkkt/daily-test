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
//////int main()
//////{
//////	printf("%d\n", sizeof(union Un));
//////	return 0;
//////}
// 
// 

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<ctype.h>
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//#include<errno.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 0, 20);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<ctype.h>
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//#include<errno.h>
//int main()
//{
//	char arr1[] = { 1,2,3,4,5 };
//	char arr2[] = { 1,3,5,7,9 };
//	int ret = memcmp(arr1, arr2, 5);
//	printf("%d ", ret);
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//void* my_memmove(void* dest, const void* src, size_t n) {
//    unsigned char* d = (unsigned char*)dest;
//    const unsigned char* s = (const unsigned char*)src;
//    if (d == s) {
//        return d;
//    }
//
//    if (s + n < d || d + n < s) {  // 没有内存重叠
//        while (n--) {
//            *(d++) = *(s++);
//        }
//    }
//    else {  // 存在内存重叠
//        if (d < s) {  // 目标地址在源地址之前，从前向后拷贝
//            while (n--) {
//                *(d++) = *(s++);
//            }
//        }
//        else {  // 目标地址在源地址之后，从后向前拷贝
//            d += n - 1;
//            s += n - 1;
//
//            while (n--) {
//                *(d--) = *(s--);
//            }
//        }
//    }
//    return dest;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    //my_memmove(arr+2, arr, 20);
//    my_memmove(arr, arr + 2, 20);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}





//class Solution {
//public:
//    int tribonacci(int n) {
//
//        if (n == 0) return 0;//边界处理
//        if (n == 1 || n == 2) return 1;//边界处理
//
//        vector<int> dp(n + 1);//开辟dp表
//
//        dp[0] = 0, dp[1] = dp[2] = 1;//初始化的dp表
//
//        for (int i = 3; i <= n; i++)
//            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];//状态转移方程
//
//        return dp[n];//题目要求返回第n个数
//    }
//};
//
//
//class Solution {
//public:
//    int tribonacci(int n) {
//        //1、创建并填满dp表
//        //2、初始化
//        //3、填表
//        //4、返回值
//        //处理边界情况
//        if (n == 0) return 0;
//        if (n == 1 || n == 2) return 1;
//
//        int a = 0, b = 1, c = 1, d = 0;
//
//        for (int i = 3; i <= n; i++)
//        {
//            d = a + b + c;
//
//            //滚动操作
//            a = b;
//            b = c;
//            c = d;
//        }
//
//        return d;
//    }
//};



//class Solution {
//public:
//    int waysToStep(int n) {
//
//        const int MOD = 1e9 + 7;//1 * 10^9 + 7，MOD常表示要取模的数
//
//        if (n == 1 || n == 2) return n;
//        if (n == 3)return 4;
//
//        vector<int> dp(n + 1);
//
//        dp[1] = 1, dp[2] = 2, dp[3] = 4;
//        for (int i = 4; i <= n; i++)
//        {
//            dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;
//            //每次做加法的时候都要取模防止越界
//        }
//        return dp[n];
//    }
//};

#include <iostream>
#include <thread>
#include <mutex>
#include <semaphore.h>
#include <vector>

std::mutex mtx;//申请互斥锁
sem_t sem;//设定信号量

//任务函数
void task(int id) 
{
    sem_wait(&sem); // P操作
    mtx.lock();
    // 进临界区

    std::cout << "Task ID: " << id << " is accessing the resource" << std::endl;

    // 出临界区
    mtx.unlock();

    sem_post(&sem); // V操作
}

int main() {
    const int num_threads = 5;
    const int max_concurrent_threads = 2;
    sem_init(&sem, 0, max_concurrent_threads); // 初始化信号量，最大并发访问数为2

    std::vector<std::thread> threads;
    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(task, i + 1);
    }

    for (auto& t : threads) {
        t.join();
    }

    sem_destroy(&sem); // 销毁信号量

    return 0;
}



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> quadruplets;
        if (nums.size() < 4) {
            return quadruplets;
        }
        sort(nums.begin(), nums.end());
        int length = nums.size();
        for (int i = 0; i < length - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            if ((long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
            {
                break;
            }

            if ((long)nums[i] + nums[length - 3] + nums[length - 2] + nums[length - 1] < target)
            {
                continue;
            }

            for (int j = i + 1; j < length - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                if ((long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
                {
                    break;
                }
                if ((long)nums[i] + nums[j] + nums[length - 2] + nums[length - 1] < target)
                {
                    continue;
                }
                int left = j + 1, right = length - 1;
                while (left < right)
                {
                    long sum = (long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target)
                    {
                        quadruplets.push_back({ nums[i], nums[j], nums[left], nums[right] });
                        while (left < right && nums[left] == nums[left + 1])
                        {
                            left++;
                        }
                        left++;
                        while (left < right && nums[right] == nums[right - 1])
                        {
                            right--;
                        }
                        right--;
                    }
                    else if (sum < target)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
        }
        return quadruplets;
    }
};
