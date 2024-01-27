#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

								//Алгоритмы
								//сортировка массива в случайном порядке
								//std::random_shuffle - вроде как запретили использовать с 17
class IAction
{
public:
	virtual void Action() = 0;
};
class CatAction :public IAction
{
	virtual void Action() override
	{
		cout << "Гладим кота" << endl;
	}

};
class TeaAction : public IAction
{
	virtual void Action() override
	{
		cout << "Пьем чай" << endl;
	}
};
class DogAction : public IAction
{
	virtual void Action() override
	{
		cout << "Гуляем с собакой" << endl;
	}
};
class SleepAction : public IAction
{
	virtual void Action() override
	{
		cout << "Спим" << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	
	IAction* arr[] = 
	{
	new CatAction(),
	new TeaAction(),
	new DogAction(),
	new SleepAction()
	};
	
	random_shuffle(begin(arr), end(arr));
	
	for (auto& element : arr)
	{
		element->Action();
	}
	
	cout << endl;

	return 0;
}
