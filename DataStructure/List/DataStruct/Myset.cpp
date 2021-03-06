/*
 * Myset.cpp
 *
 *  Created on: 01-Apr-2018
 *      Author: tapesh
 */

#if 0
#include "BaseFile.h"

template<typename T>
class MySet
{
private:
	set<T,T> _set;
public:
	MySet(){}
	MySet(const initializer_list<T> &list)
	{
		for(auto &at:list)
		{
			_set.insert(at);
		}
	}
	auto insert(const T &data)->decltype(_set.insert(data))
	{
		return _set.insert(data);
	}
	auto begin()->decltype(_set.begin())
	{
		return _set.begin();
	}
	auto end()->decltype(_set.begin())
	{
		return _set.end();
	}
};

class test
{
	int data;
public:
	test():data(0){}
	test(int d):data(d){}
	void display() const
	{
		cout<<data<<endl;
	}
	bool operator()(const test &l, const test& r)
	{
		return l.data>r.data;
	}
};
int main()
{
	test o1(1),o2(2),o3(5),o5(1100),o4(3473);
	MySet<test> obj = {move(o1),o2,o3,o4,o5};

	for(auto &at:obj)
	{
		at.display();
	}

	return 0;
}
#endif
