#include <iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

								//Алгоритмы
								// Поиск
								//std::copy,  - просто копирует
								// std::copy_if - применяет придекат


template<typename T>
void printVc(T &vc) 
{
	for (auto&& e : vc)
	{
		cout << e << endl;
	}
}

class Person 
{public:
	Person(string name="Name",double score=0)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person &p)  // предикат - возвращает булевое значение
	{
		return p.Score > 100;
	}
	string Name;
	double Score;
};

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "std::copy_if -> для вектора состоящего из класса Person" << endl;
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

	vector<Person> result;
	copy_if(people.begin(), people.end(), back_inserter(result), [](const Person& p) 
		{
			return p.Score>100;
		});
	sort(result.begin(), result.end(), [](const Person &p1, const Person &p2)
		{
			return p1.Score < p2.Score;
		});

	cout << "\t ИМЯ:\t БАЛЛЫ:" << endl;
	for (auto& a : result)
	{
		cout << "\t" << a.Name << "\t" << a.Score << endl;
	}
	
	return 0;
}
