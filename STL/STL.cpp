#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

								//Алгоритмы
								// for_each
						
	
class Point {
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int x, y;
};

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[] = {32,435,2,45,78,487,894,38};

	std::cout << "\t Алгоритм for each" << endl;
	for_each(begin(arr), end(arr), [](const int &b) {
		std::cout << b << endl;
		});

	std::cout << "\t Цикл for each" << endl;

	for (auto&& b : arr)
	{
		std::cout << b << endl;
	}

	
	return 0;
}
