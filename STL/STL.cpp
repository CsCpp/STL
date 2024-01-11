#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	vector<int>myVector = { 23,46,678,98,45 };
	myVector.reserve(9999);
	myVector.push_back(45443);
	myVector.push_back(9);
	myVector.push_back(1);
	myVector.push_back(21);
	cout << "количество элементов в векторе = " << myVector.size() << endl;
	myVector.push_back(9);
	myVector.push_back(1);
	myVector.push_back(21);
	
	
	cout << "количество элементов в векторе = " << myVector.size() << endl;
	cout << "capacity = " << myVector.capacity() << endl;
	myVector.shrink_to_fit();
	cout << "capacity = " << myVector.capacity() << endl;
	for (int i=0; i<myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	return 0;
}
