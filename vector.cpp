#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>

#include<algorithm>
using namespace std;
void PrintV(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	vector<int >v1;
	vector<int>v2;
	//reserve 预留空间,减少重新开辟空间的数目
	int num = 0;
	v1.reserve(10000);
	int* p = NULL;
	for (int i = 0; i < 10000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			num++;
			p = &v1[0];
		}
	}
	cout << num << endl;
	//PrintV(v1);
	//v1.swap(v2);
	//交换两个容器,使用时可以用来压缩vector的内存空间
	//cout << v1.capacity() << endl;
	//cout << v1.size() << endl;
	//v1.resize(3);
	//cout << v1.capacity() << endl;
	//cout << v1.size() << endl;
	//vector<int>(v1).swap(v1);//拷贝构造后交换后,匿名对象被删除
	//cout << v1.capacity() << endl;
	//cout << v1.size() << endl;
	//PrintV(v1);
	//cout << v1.back() << endl;
	//cout << v1.front() << endl;
	return 0;
}