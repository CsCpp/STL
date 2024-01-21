#include <iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

								//Алгоритмы
								// удаление
								//std::remove,  - не удаляет - а сдвигает
								// std::remove_if - сдвиг с условием

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
	cout << "метод remove " << endl;
	vector<int> v = { 4,21,56,21,78,31,54,29,24,4,58,12,34 };
	cout << "Vector =  " << endl;
	printVc(v);
	cout << "Применяем: remove(v.begin(), v.end(), 4);" << endl;
	auto result=remove(v.begin(), v.end(), 4); // итератор result указывает на точку смещения - слева нужные элементы -  с права  нет
	printVc(v);
	cout << "Применяем: v.erase(result, v.end());" << endl;
	v.erase(result, v.end()); // удаляем все что с права
	printVc(v);
	cout << "метод remove_if " <<endl;

	vector<Person> people
	{
		Person("Alina",200),
		Person("Dasha",251),
		Person("Vasua",99),
		Person("Petya",120),
		Person("Dasha",18),
		Person("Gena",162),
		Person("Tanya",111),
		Person()				// конструктор с параметрами по умолчанию
	};
	cout << "\t ИМЯ:\t БАЛЛЫ:" << endl;
	for (auto& a : people)
	{
		cout << "\t" << a.Name << "\t" << a.Score << endl;
	}
	cout << "Применяем: remove p.Score > 100" << endl;

	cout << "Применяем: people.erase(res2, people.end());" << endl;
	people.erase(remove_if(people.begin(), people.end(), [](const Person& p)
		{
			return p.Score > 100;
		}), people.end());
	cout << "\t ИМЯ:\t БАЛЛЫ:" << endl;
	for (auto& a : people)
	{
		cout << "\t" << a.Name << "\t" << a.Score << endl;
	}

	cout << "удаляем пробелы в string" << endl;
	string str = "Текст   с  несколькими  пробелами";
	cout << str << endl;
	str.erase(remove(str.begin(), str.end(), ' '),str.end());

	cout << str << endl;


	return 0;
}
