#include <iostream>
#include <vector>
#include <list>
using namespace std;

//List

template<typename T>
void PrintList(const list<T> &lst)
{
	for (auto&& i : lst)
	{
		cout << i << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	list<int> myList = {4,52,64,86,54};
	myList.push_back(5);
	myList.push_front(64);
	myList.push_back(5);
	myList.push_front(64);
	//auto it = myList.begin();

	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.sort();
	cout << "___ SORT ___ "  << endl;
	cout << "SIZE = "<<myList.size() << endl;
	PrintList(myList);

	myList.pop_front();
	cout << "___ pop_front ___ " << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.pop_back();
	cout << "___ pop_back ___ " << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.unique();
	cout << "___ unique ___   // Удаляем последовательные дубликаты" << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.reverse();
	cout << "___ reverse ___" << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.clear();
	cout << "___ clear ___" << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList = { 45,6,9,46,8663,35,65,48,63,75 };
	auto it = myList.begin();
	advance(it, 5);					// Сдвигает итератор it+=5
	myList.insert(it, 12);

	cout << "___ insert ___" << endl;
	cout << "Итератор = " << *it << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);


	it++;							// Сдвигает итератор
	it=myList.erase(it);
	cout << "___ erase ___" << endl;
	cout << "Итератор = " << *it << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.remove(75);
	cout << "___ remove ___" << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	myList.assign(5, 55);
	cout << "___ assign ___ //Заполняем список значениями 55 - 5 штук" << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	list <int> myList2 = { 54,62,3,114,254,62,85 };
	myList.assign(myList2.begin(), myList2.end());
	cout << "___ assign ___ //Копируем значения списка2 в список" << endl;
	cout << "SIZE = " << myList.size() << endl;
	PrintList(myList);

	return 0;
}
