#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

								//Алгоритмы
								//удалить повторяющийся элемент
								//std::unique std::unique_copy
		//std::unique  - удаляет пары стоящие рядом
int main()
{
	setlocale(LC_ALL, "ru");
	int arr[] = {1,2,2,2,1,2,2,3,4,4,4,4,4,5,1,1,1};
	cout << "arr[] = {1,2,2,2,1,2,2,3,4,4,4,4,4,5,1,1,1};" << endl;
	auto itr=unique(begin(arr), end(arr));
	cout << "unique" << endl;
	for_each(begin(arr), itr, [](int a) {
		cout << a << endl;
		});
	sort(begin(arr), end(arr));
	cout << "sort+unique" << endl;
	auto itr2 = unique(begin(arr), end(arr));
	for_each(begin(arr), itr2, [](int a) {
		cout << a << endl;
		});
			//vector
	cout << "\t \t vector" << endl;
	vector<int> v= { 1,2,2,2,1,2,2,3,4,4,4,4,4,5,1,1,1 };
	sort(begin(v), end(v));
	auto itr3 = unique(begin(v), end(v));
	v.erase(itr3, end(v));
	for (auto& a : v) {
		cout << a << endl;
	}
	cout << "\t \t std::unique_copy" << endl;
	vector<int> v2 = { 1,2,2,2,1,2,2,3,4,4,4,4,4,5,1,1,1 };
	list<int> v3;
	unique_copy(begin(v2), end(v2), back_inserter(v3));

	return 0;
}
