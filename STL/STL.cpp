#include <iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

								//Алгоритмы
								// Поиск
								//std::find,  std::find_IF, std::find_if_not

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
	

	cout << "Поиск(find) " << endl;
	auto it=find(vc.begin(), vc.end(),41);
	if (it == vc.end()) { cout << " нету " << endl; }
	else
	{
		cout << " есть " << endl;
	}

	cout << "Поиск(find_if) " << endl;
	// для условия принимайет предикат
	auto result = find_if(vc.begin(), vc.end(), [](int a) {
		return a < 0;
		});

	if (result == vc.end()) { cout << " нету " << endl; }
		else
		{
			cout << " есть " << endl;
		}
	cout << "Поиск(find_if_not) " << endl;
	// для условия принимайет предикат
	auto result2 = find_if_not(vc.begin(), vc.end(), [](int a) {
		return a < 0;
		});

	if (result2 == vc.end()) { cout << " нету " << endl; }
	else
	{
		cout << " есть " << endl;
	} // поиск для вектора из int


	//сортировка массива
	//cout << "Массив" << endl;
	//const int SIZE = 7;
	//int arr[SIZE] = {52,14,30,82,17,92,31};
	//printVc(arr);
	//cout << "Массив после cортировки без компоратора" << endl;
	//sort(arr,arr+SIZE);
	//printVc(arr);
	cout << "Поиск(find_if) для вектора состоящего из класса Person" << endl;
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
	auto ptr2=find_if(people.begin(), people.end(), [](const Person& p)
			{
				return p.Name=="petya";
			});

	if (ptr2 == people.end()) { cout << " нету " << endl; }
	else
	{
		cout << " есть " << endl;
	}


	return 0;
}
