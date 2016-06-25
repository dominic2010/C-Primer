#include <string>
#include <iostream>

using namespace std;

void StringCompareValue()
{
	string str1, str2;
	cin >> str1;
	cin >> str2;
	if (str1 == str2)
	{
		cout << "str1 is equel to str2 "<< endl;
	}
	else if (str1 < str2)
	{
		cout << "the larger one is str2"<<endl;
	}

}



void StringCompareLength()
{
	string str1, str2;
	cin >> str1;
	cin >> str2;
	if (str1.size() == str2.size())
	{
		cout << "str1 has same lentgh with  str2 " << endl;
	}
	else if (str1.size() == str2.size())
	{
		cout << "str2 is longer" << endl;
	}

}

