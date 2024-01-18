#include <iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

								//Алгоритмы
								//
								//Sort
//std::sort() из заголовочного файла <algorithm>
//Компаратор должен принимать два значения и возвращать значение типа bool

//std::ranges::sort()
//Начиная со стандарта C++20

//Сортировка с проекцией
//Функция std::ranges::sort поддерживает проекцию данных для функции компаратора.

//бинарный предикат:
bool MyPred(int a, int b)
{
	return a > b;
}

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
	vector<int> vc = { 21,95,23,74,52,61,41,10,80,12,30 };
	printVc(vc);
	

	cout << "Вектор после cортировки без компоратора" << endl;
	sort(vc.begin(), vc.end());
	printVc(vc);

	cout << "Вектор после cортировки c предикатом" << endl;
	sort(vc.begin(), vc.end(),MyPred);
	printVc(vc);

	cout << "Вектор после cортировки c лямбда выражениеm" << endl; //ананимная функция
	sort(vc.begin(), vc.end(), [](int a, int b) {return a < b; });
	printVc(vc);

	//сортировка массива
	cout << "Массив" << endl;
	const int SIZE = 7;
	int arr[SIZE] = {52,14,30,82,17,92,31};
	printVc(arr);
	cout << "Массив после cортировки без компоратора" << endl;
	sort(arr,arr+SIZE);
	printVc(arr);

	cout << "Массив после cортировки c бинарным ананимным придикатом" << endl; //ананимная функция
	sort(arr, arr + SIZE, [](int a, int b) {return a > b; });
	printVc(arr);

	vector<Person> people
	{
		Person("Alina",200),
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
	//если простая сортировка то нужно перегрузить оператор сравнения
	cout << "Сортируем по БАЛЛАМ" << endl;
	sort(people.begin(), people.end(), [](const Person& p1,const Person& p2)
		{
			return p1.Score < p2.Score;
		});

	for (auto& a : people)
	{
		cout << "\t" << a.Name << "\t" << a.Score << endl;
	}
	cout << "Сортируем по Name" << endl;
	sort(people.begin(), people.end(), [](const Person& p1, const Person& p2)
		{
			return p1.Name < p2.Name;
		});

	for (auto& a : people)
	{
		cout << "\t" << a.Name << "\t" << a.Score << endl;
	}

	return 0;
}
