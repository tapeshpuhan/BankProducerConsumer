/*
 * Recusion.cpp
 *
 *  Created on: 23-Mar-2018
 *      Author: tapesh
 */

#include<iostream>
using namespace std;

int fact(int n)
{
	static int count = 0;
	cout<<count++<<" "<<n<<endl;
	if(!n)
		return 1;
	else
		return (n * fact(n-1));
}

int main()
{
	cout<<"Factorial of :: "<<fact(5)<<endl;
	return 0;
}