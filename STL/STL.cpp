#include <iostream>
#include <vector>
using namespace std;

//Итераторы

int main()
{
	setlocale(LC_ALL, "ru");

	vector<int>myVector = {12,435,456,68,32,798,4332}; // Создаем вектор

	// Выводим 
	for (auto i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	
	auto itErase = myVector.begin();			//Итератор на первое значение
	cout << "itErase = " << *itErase << endl;
	cout << "+++++++ Erase 0-2 ++++++" << endl;
	myVector.erase(itErase,itErase+2);			//Стираем по диапазону
				
					//ЕСЛИ РАСКОМЕНТИТЬ ТО КРАШИТСЯ
					// 
	//cout << "itErase = " << *itErase << endl;	

	for (auto i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
					//ЕСЛИ РАСКОМЕНТИТЬ ТО КРАШИТСЯ
					// 
	//cout << "itErase = " << *itErase << endl;
	
	return 0;
}
