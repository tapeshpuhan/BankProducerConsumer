/*
 * Set.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: tapesh
 */

#include<set>
#include<iostream>
#include"Task.h"
using namespace std;

template<typename T>
class lesser_t
{
public:
	bool operator ()(const T &a, const T &b)
	{
		return a< b;
	}
};

template<typename T>
class greater_t
{
public:
	bool operator ()(const T &a, const T &b)
	{
		return a > b;
	}
};

class P
{
	int a,b,c;
public:
	explicit P(int s,int d,int f):a(s),b(d),c(f){}
	 P(int s,int d):a(s),b(d){}
};
int main()
{
	P p{1,2,4};

	return 0;
}