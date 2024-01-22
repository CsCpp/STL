#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
#include <string>
using namespace std;

								//Алгоритмы
								// наименьший элемент // min_element
								//minmax_element
								

class Person
{
public:
	Person(string name = "Name", double score = 0)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p)  // предикат - возвращает булевое значение
	{
		return p.Score > 100;
	}
	string Name;
	double Score;
};


template<typename T>
void printVc(T& vc)
{
	for (auto&& e : vc)
	{
		cout << e << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "ru");

	vector<int> v = { 4,21,56,21,78,31,-54,29,-24,4,58,12,34 };
	list<int> lst = {4,21,13,54,-1,68,10,93,15};
	const int size = 4;
	int arr[size] = { 21,34,8,5 };
	
	auto itr=min_element(v.begin(), v.end());
	cout << *itr << endl;
	auto iitr = min_element(lst.begin(), lst.end());
	cout << *iitr << endl;
	auto iiitr = min_element(arr, arr + size);
	cout << *iiitr << endl;
	
	cout << "\t" << "min max element" << endl;

	auto itr2 = minmax_element(v.begin(), v.end());
	cout <<"min \t" << *itr2.first<<"\t max \t"<<*itr2.second << endl;
	auto iitr2 = minmax_element(lst.begin(), lst.end());
	cout << "min \t" << *iitr2.first << "\t max \t" << *iitr2.second << endl;
	auto iiitr2 = minmax_element(arr, arr + size);
	cout << "min \t" << *iiitr2.first << "\t max \t" << *iiitr2.second << endl;
	//vector<Person> people
	//{
	//	Person("Alina",200),
	//	Person("Dasha",251),
	//	Person("Vasua",99),
	//	Person("Petya",120),
	//	Person("Dasha",18),
	//	Person("Gena",162),
	//	Person("Tanya",111),
	//	Person()				// конструктор с параметрами по умолчанию
	//};
	//cout << "\t ИМЯ:\t БАЛЛЫ:" << endl;
	//for (auto& a : people)
	//{
	//	cout << "\t" << a.Name << "\t" << a.Score << endl;
	//}
	//cout << "Применяем: remove p.Score > 100" << endl;

	//cout << "Применяем: people.erase(res2, people.end());" << endl;
	//people.erase(remove_if(people.begin(), people.end(), [](const Person& p)
	//	{
	//		return p.Score > 100;
	//	}), people.end());
	//cout << "\t ИМЯ:\t БАЛЛЫ:" << endl;
	//for (auto& a : people)
	//{
	//	cout << "\t" << a.Name << "\t" << a.Score << endl;
	//}

	//cout << "удаляем пробелы в string" << endl;
	//string str = "Текст   с  несколькими  пробелами";
	//cout << str << endl;
	//str.erase(remove(str.begin(), str.end(), ' '),str.end());

	//cout << str << endl;

	
	return 0;
}
