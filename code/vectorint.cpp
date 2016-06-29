/*
 * vectortemplate.cpp
 *
 *  Created on: Jun 25, 2016
 *      Author: xiaoyao
 */


#include <vector>
#include <iostream>
#include <string>
#include "vectortemplate.h"


using namespace std;
int main()
{
	vector<int> vectint;
	int i;
	while (cin >>i)
	{
		vectint.push_back(i);
	}
	for (auto j : vectint)
		cout << j <<endl;
	return 0;
}


