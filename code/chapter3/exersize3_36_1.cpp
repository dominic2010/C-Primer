/*
 * exersize3_36.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: huangshaolin
 */

#include <iostream>
#include <iterator>

using namespace std;




bool compare( int* const b1, int* const e1, int* const b2, int* const e2)
{
	if ((e1 -b1) != (e2 -b2))
	{
		return false;
	}
	for (int *i = b1, *j = b2; (i != e1) && (j != e2); ++i, ++j)
	{
		if (*i != *j)
		{
			return false;
		}
	}
	return true;
}




int main()
{
	int arr_a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr_b[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	if (compare(begin(arr_a),end(arr_a),begin(arr_b),end(arr_b)))
	{

		cout << "true"<<endl;
	}
	else
	{
		cout << "false"<<endl;
	}

}
