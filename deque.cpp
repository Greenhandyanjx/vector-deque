#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
//insert erase 需要提供的是迭代器
//deque<int>::iterator it=d.begin();
//it+=?
int main()
{
	deque<int>d1,d2;//没有容量的概念,可以无限填充
	for (int i = 0; i < 10; i++)
	{
		d1[i] = i;
	}
	d2 = d1;
	d2.assign(d1.begin(), d1.end());
	d2.resize(3);
	return 0;
}