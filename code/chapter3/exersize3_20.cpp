/*
 * exersize3_20.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: huangshaolin
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intv;
	int i;
	while (cin >> i)
			intv.push_back(i);
	if (intv.empty())
	{
		cout << "please enter a number" <<endl;
		return -1;
	}
	else if (intv.size() ==1)
	{
	     cout << intv[0] << " have only one element";

	}
	else
	{
		for (decltype(intv.size()) i = 0; i < intv.size() - 1 ; i++)
		{
			cout << intv[i] + intv[i+1] << " ";
		}
	}

	cout << endl;
	decltype(intv.size()) size = intv.size();
	if (size % 2 != 0)
	{
		size = size / 2 +1;
	}
	else
	{
		size = size / 2;
	}
	for (decltype(intv.size()) i = 0; i < size; i++)
	{
	    cout << intv[i] + intv[intv.size() - 1 - i] << " ";
	}

	return 0;
}


