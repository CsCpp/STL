#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

								//Алгоритмы
								//сортировка массива в случайном порядке
								//std::random_shuffle
		//std::unique  - удаляет пары стоящие рядом
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int arr[] = {1,2,3,4,5};
	cout << "\t arr[] = {1,2,3,4,5};" << endl;
	random_shuffle(begin(arr), end(arr));
	cout << "\t random_shuffle" << endl;
	for (auto& a : arr)
	{
		cout << "  " << a << "  ";
	}
	
	cout << endl;

	return 0;
}
