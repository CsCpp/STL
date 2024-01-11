#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>myVector = { 23,46,678,98,45 };
	vector<int>::iterator it = myVector.begin();

	auto it2 = myVector.begin();
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}
