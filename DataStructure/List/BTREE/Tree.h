/*
 * Tree.h
 *
 *  Created on: 21-Mar-2018
 *      Author: tapesh
 */

#ifndef TREE_H_
#define TREE_H_

#include<iostream>
#include<string>
#include<initializer_list>
#include<queue>
using namespace std;

template<typename T>
class BSt
{
	using tNode = struct Node
			{
				T data;
				Node *Left;
				Node *Right;
				Node():Left(nullptr),Right(){}
			};
	tNode *root;
public:
	BSt():root(nullptr){}
	BSt(const initializer_list<T> &list);
	bool Insert(const T &data);
	bool Traverse();
	bool isBst();
};



#endif /* TREE_H_ */
