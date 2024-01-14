#include <iostream>
#include <forward_list>
using namespace std;

//Forward_List

//template<typename T>
//void PrintList(const list<T> &lst)
//{
//	for (auto&& i : lst)
//	{
//		cout << i << endl;
//	}
//}


int main()
{
	setlocale(LC_ALL, "ru");
	forward_list<int> myList = {4,52,64,86,54};
	myList.push_front(32);
	myList.push_front(87);
	
	//myList.pop_front();
	
	//myList.sort();
	
	forward_list <int>::iterator itList = myList.begin();
	
	itList++;

	cout <<"Итератор указывает на : " << *itList << endl;
	cout <<endl<< "Вставили 1111 после итератора " << endl << endl;
	myList.insert_after(itList, 1111);		//Вставить 1111 после итератора

	for (auto&& var : myList)
	{
		cout << var << endl;
	}

	cout << "Удаляем элемент после итератора " << *itList << endl;
	itList=myList.erase_after(itList);
	
	for (auto&& var : myList)
	{
		cout << var << endl;
	}
	
	return 0;
}
