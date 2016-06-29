/*
 * vectortemplate.cpp
 *
 *  Created on: Jun 25, 2016
 *      Author: xiaoyao
 */


#include <vector>
#include <iostream>
#include <string>


using namespace std;
int main()
{
	vector<string> vectstring;
	string word;
	while (cin >>word)
	{
		vectstring.push_back(word);
	}
	for (auto j : vectstring)
		cout << j <<endl;
	return 0;
}


