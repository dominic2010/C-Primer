/*
 * exersize3_42.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: huangshaolin
 */

#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
	int arr[5];
	int arr_b[5]= {1,2,3,4,5};
	vector<int> ivec = {1,2,3,4,5};
	for (int * i = begin(arr); i!= end(arr); i++)
	{
		*i = ivec[i - begin(arr)];
		cout << *i << " ";
	}
	return 0;
}



