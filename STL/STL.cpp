#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

								//Алгоритмы
								// equal c предикатом
								//сравнение массивов
	
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
	cout << "equal:" << endl;
	vector <Point>  arr  =	
	{
		Point(3,5),
		Point(5,2),
		Point(9,7)
	};
	vector <Point>  arr2 =
	{
		Point(9,7),
		Point(3,5),
		Point(5,2)
		
	};
	sort(begin(arr), end(arr), [](const Point& p1, const Point& p2) {
		return p1.x > p2.x;
		});
	sort(begin(arr2), end(arr2), [](const Point& p1, const Point& p2) {
		return p1.x > p2.x;
		});

	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point &p1,const Point &p2) {
		return p1.x == p2.x && p1.y == p2.y;

		});
	cout << result << endl;
	return 0;
}
