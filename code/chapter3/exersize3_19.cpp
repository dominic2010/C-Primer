/*
 * exersize3_19.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: huangshaolin
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 = {42,42,42,42,42,42,42,42,42,42};
	vector<int> v2(10,42) ;
	vector<int> v3;
	for(int i = 0; i < 10; i++)
		v3.push_back(v3[i]);
	return 0;
}


