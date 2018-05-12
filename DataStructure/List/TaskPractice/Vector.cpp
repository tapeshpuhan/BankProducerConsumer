/*
 * Vector.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: tapesh
 */
#include<iostream>
#include<vector>
using namespace std;

class A
{
	int i;
	static int c;
public:
	A():i(0){}
	explicit A(int a):i(a){}
	A(const A& o):i(o.i){
		cout<<"Copy A() "<<c++<<endl;
	}
};
int A::c=0;
/*
int main()
{
	A o1(12),o2(3),o4(25);
	vector<A> v;
	cout<<" v.size() "<<v.size()<<endl;
	cout<<" v.empty() "<<v.empty()<<endl;
	cout<<" v.max_size() "<<v.max_size()<<endl;
	v.resize(120000);
	v.push_back(o1);
	v.push_back(o2);
	v.push_back(o4);
	cout<<" v.capacity() "<<v.capacity()<<endl;
	cout<<" v.size() "<<v.size()<<endl;

	for(int i =0; i < 12000; i++)
	{
		A obj(i);
		v.push_back(obj);
		cout<<" v.capacity() "<<v.capacity()<<endl;
		cout<<" v.size() "<<v.size()<<endl;
	}

	return 0;
}
*/


