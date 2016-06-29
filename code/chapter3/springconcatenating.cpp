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
	while (cin >> str)
	{
		largeStr += str;
	}

	cout << "the concatenating string is " << largeStr << endl;
}

void springconcatenating2()
{
	string largeStr;
	string str;
	while (cin >> str)
	{
		if (largeStr.empty())
		{
			largeStr += str;
		}
		else
		{
			largeStr += ' ';
			largeStr += str;

		}

	}

	cout << "the concatenating string is " << largeStr << endl;
}

