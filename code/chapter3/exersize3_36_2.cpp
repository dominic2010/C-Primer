

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec_a = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> vec_b = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	if (vec_a == vec_b)
	{

		cout << "true"<<endl;
	}
	else
	{
		cout << "false"<<endl;
	}

}
