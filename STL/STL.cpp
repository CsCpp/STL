#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

								//Алгоритмы
								//  mismatch - возвращает итераторы  элемента несоответствия
								// accumulate
								//сравнение массивов
								
//eqal equal() возвращает true, если обе последовательности одинаковы в диапазоне, ограниченном парой итераторов [first,last).

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "equal:" << endl;
	vector <int>  arr  =	{1,21,56,21,4};
	vector <int> arr2 =		{4,21,56,21,1};
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << result << endl;
	cout << "SORT:" << endl;
	sort(begin(arr), end(arr));
	sort(begin(arr2), end(arr2));
	bool result2 = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << result2 << endl;
	arr = { 1,21,56,21,4 };
	arr2 = { 1,21,568,21,4 };
	auto result3 = mismatch(begin(arr), end(arr), begin(arr2), end(arr2));
	if (result3.first == end(arr) && result3.second == end(arr2))
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
		cout <<"second \t" << *result3.second << endl;
		cout << "first \t" << *result3.first << endl;
	}

		
		
		
	
	return 0;
}
