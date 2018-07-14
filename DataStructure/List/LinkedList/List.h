/*
 * List.h
 *
 *  Created on: 18-Mar-2018
 *      Author: tapesh
 */

#ifndef LIST_H_
#define LIST_H_

#include<iostream>
#include<string>
#include<initializer_list>
using namespace std;

template<typename T>
class List
{
private:
	using tList = struct Node
			{
				Node *next;
				Node *prev;
				T data;
			};
	tList *first;
	tList *last;
public:
	List():first(nullptr),last(nullptr){}
	List(const initializer_list<T> &list):first(nullptr),last(nullptr)
	{
		for(const auto& at : list)
		{
			Insert(at);
		}
	}
	void Insert(T data);
	void Display();

	List<T>& operator +=(const List<T> &l);

};



#endif /* LIST_H_ */