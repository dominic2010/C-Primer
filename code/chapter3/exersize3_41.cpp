/*
 * exersize3_41.cpp
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
	int arr[5] = {1,2,3,4,5};
	vector<int> ivec(begin(arr),end(arr));
	for (auto i: ivec)
		cout << i << "  ";
	return 0;
}

