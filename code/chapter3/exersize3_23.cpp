/*
 * exersize3_23.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: huangshaolin
 */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> ivec(10,5);
	for (auto it = ivec.begin(); it != ivec.end(); it++)
	{
		*it *= 2;
	}
	for ( auto value : ivec)
	{
		cout << value << " ";
	}

}



