/*
 * springconcatenating.cpp
 *
 *  Created on: Jun 25, 2016
 *      Author: xiaoyao
 */
#include "springconcatenating.h"
#include <iostream>
#include <string>
using namespace std;

void springconcatenating()
{
	string largeStr;
	string str;
	while(cin >> str)
	{
		largeStr += str;
	}

	cout <<"the concatenating string is "<< largeStr<<endl;
}


int main()
{
	springconcatenating();

}
