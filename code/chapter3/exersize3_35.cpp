/*
 * exersize3_35.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: huangshaolin
 */


#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int* first = begin(arr);
	int* last = end(arr);
	for ( auto it = first; it != last; it ++)
	{
		*it = 0;
	}
	for ( auto it : arr)
	{
		cout << it << " ";
	}
	return 0;
}

