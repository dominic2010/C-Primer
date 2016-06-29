/*
 * deletepunctuation.cpp
 *
 *  Created on: Jun 25, 2016
 *      Author: xiaoyao
 */

#include "deletepunctuation.h"
#include <iostream>
#include <string>

using namespace std;

void deletepunctuation()
{
	string s;
	cout << "Enter a string including punctuation." << endl;
	cin >> s;
		for (auto i : s)
			if (!ispunct(i))
				cout << i;
		cout << endl;

}

int main()
{
	deletepunctuation();

}
