#include <iostream>
#include <set>
using namespace std;

//set      //Бинарное дерево
//multiset


int main()
{
	setlocale(LC_ALL, "ru");
	multiset<int> mMs = {54,6356,8,75,54,65}; // мультисет может хранить дубли
	mMs.insert(555);
	mMs.insert(555);
	mMs.insert(555);
	mMs.insert(555);
	mMs.insert(555);
	mMs.insert(555);

	auto it1 = mMs.lower_bound(8); // поиск первого элемента не меньше данного 
	auto it2 = mMs.upper_bound(8); // поиск первого элемента большего данного 
	auto it3 = mMs.equal_range(8); // вернет предыдущую пару lower_bound + upper_bound

	for (auto&& it : mMs)
	{
		cout << it << endl;
	}

	set<int> mySet;
	for (int i = 0; i < 20; ++i)
	{
		mySet.insert(rand() % 100);
	}
	mySet.insert(10);
	mySet.insert(32);
	mySet.insert(1);
	mySet.insert(46);
	// удаляем числа:
	//mySet.erase(1);
	// можно посмотреть результат получилось ли удалить:
	auto result= mySet.erase(1);
	cout << "Результат удаления числа из дерева: " << result << endl;
	// так же и для insert  -  только возвращается  итератор + булевый результат
	auto res = mySet.insert(23);
	cout << "Результат inserta : "<< res.second << endl;
	

	for (auto&& it : mySet)
	{
		cout << it << endl;
	}

	auto it = mySet.find(33); //find  ищет число 33 и возвращает итератор на него если такое есть

	int val;
	cout << "Введите число для поиска" << endl;
	cin >> val;
	cout << endl;
	if (mySet.find(val) != mySet.end())
	{
		cout << "число " << val << " найдено" << endl;
	}
	else
	{
		cout << "число " << val << " отсутствует" << endl;
	}



	return 0;
}
