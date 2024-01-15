#include <iostream>
#include<list>
#include <queue>
using namespace std;

//queue      //Очередь
// адаптер для  контейнеров -  лист или дек
//priority_queue // Очередь приоритетов -  -  vector или дек
// 
//				//queue      //Очередь
//back	Возвращает ссылку на последний и наиболее недавно добавленный элемент в конец queue.
//empty	Проверяет, является ли queue пустым.
//front	Возвращает ссылку на первый элемент в начале queue.
//pop	Удаляет элемент из начала queue.
//push	Добавляет элемент в конец queue.
//size	Возвращает количество элементов в контейнере queue.


int main()
{
	setlocale(LC_ALL, "ru");
	queue<int> q;
	auto a = q._Get_container();		// по дефолту deque
	queue<int,list<int>> qQ;			// теперь работаем с List

	q.push(34);
	q.push(21);
	q.push(64);
	q.push(37);
	q.push(93);
	cout << "front " << q.front()<< endl;
	q.pop();
	cout << "Pop + front " << q.front() << endl;
	cout << "Back " << q.back() << endl;
	cout << "while (!.empty()) "<< endl;
	cout << "Количество элементов в очереде = " << q.size() << endl;
	int i = 1;
	while (!q.empty())
	{	
		cout << i <<" = " << q.front() << endl;
		q.pop();
		++i;
	}
	cout << "Количество элементов в очереде = " << q.size() << endl<<endl;

	//					Очередь приоритетов
	cout << "Очередь приоритетов" << endl;
	priority_queue<int> pq;
	pq.push(49);
	pq.push(12);
	pq.push(83);
	pq.push(38);
	pq.push(27);
	cout << "Количество элементов в очереде = " << pq.size() << endl;
	i = 1;
	while (!pq.empty())
	{
		cout << i << " = " << pq.top() << endl;
		pq.pop();
		++i;
	}
	cout << "Количество элементов в очереде = " << pq.size() << endl;

	return 0;
}
