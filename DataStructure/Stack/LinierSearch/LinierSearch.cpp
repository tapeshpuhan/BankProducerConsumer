/*
 * LinierSearch.cpp
 *
 *  Created on: 13-Feb-2018
 *      Author: tapesh
 */

#include "LinierSearch.h"

template<typename T>
bool LinerSearch<T>::searchValue(const T &value)
{
	for(auto at : data)
	{
		if(at == value)
		{
			return true;
		}
	}
	return false;
}

template<typename T>
void LinerSearch<T>::print()
{
	for(auto at : data)
	{
		cout<<at<<" ";
	}
	cout<<endl;
}

int main()
{
	vector<int> od = {1,2,3,4,5,6};
	LinerSearch<int> var(od);
	cout<<"Found/not found "<<var.searchValue(4)<<endl;
	cout<<"Found/not found "<<var.searchValue(10)<<endl;

	vector<string> os = {"ram","sam","hari","samu","tapu","bunil"};
	LinerSearch<string> var11(os);
	cout<<"Found/not found "<<var11.searchValue("bunil")<<endl;
	cout<<"Found/not found "<<var11.searchValue("suni")<<endl;

	return 0;
}