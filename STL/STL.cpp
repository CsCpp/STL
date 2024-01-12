#include <iostream>
#include <vector>
using namespace std;

//Итераторы

int main()
{
	setlocale(LC_ALL, "ru");

	vector<int>myVector = {12,435,456,68,32,798,4332};
	auto it = myVector.begin();
	for (auto i=myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	//advance(it, 5);
	//myVector.insert(it, 100);
	//cout << "+++++++ INSERT ++++++" << endl;
	//for (auto i = myVector.begin(); i != myVector.end(); i++)
	//{
	//	cout << *i << endl;
	//}
	//cout << "+++++++ Erase ++++++" << endl;
	auto itErase = myVector.begin();
	cout << *itErase << endl;
	////itErase++;
	//myVector.erase(itErase);
	//for (auto i = myVector.begin(); i != myVector.end(); i++)
	//{
	//	cout << *i << endl;
	//}

	cout << "+++++++ Erase 0-2 ++++++" << endl;
	myVector.erase(itErase,itErase+2);
	cout << *itErase << endl;

	for (auto i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	cout << *itErase  << endl;

	//cout << *(it+3) << endl;
	//advance(it, 3);
	//cout << *it << endl;
	//cout << myVector[2] << endl;
	/*for (vector<int>::reverse_iterator it=myVector.rbegin(); it !=myVector.rend(); it++)
	{
		
		cout << *it << endl;
	}*/
	return 0;
}
