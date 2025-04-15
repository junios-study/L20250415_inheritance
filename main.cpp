#include <iostream>
#include "World.h"
#include "Slime.h"
#include <vector>

using namespace std;

int main()
{
	std::vector<int> IntArray;

	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);
	IntArray.push_back(4);
	IntArray.push_back(5);
	IntArray.push_back(6);
	IntArray.push_back(7);
	IntArray.erase(find(IntArray.begin(), IntArray.end(), 3));
	IntArray.clear();

	for (int i = 0; i < IntArray.size(); ++i)
	{
		cout << IntArray[i] << endl;
	}
	//for (std::vector<int>::iterator iter = IntArray.begin(); iter != IntArray.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//for (auto iter = IntArray.begin(); iter != IntArray.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	for (auto data : IntArray)
	{
		cout << data << endl;
	}

	//STL
	//container
	//Dynamic Array : vector
	//추가 : push_back
	//삭제 : erase
	//순회 : for, ranged for
	//탐색 : find
	std::vector<int> Gold;


	for (int i = 0; i < Gold.size(); ++i)
	{
		cout << Gold[i] << endl;
	}

	for (auto Data : Gold)
	{
		cout << Data << endl;
	}
	



	//UWorld* MyWorld = new UWorld();

	//MyWorld->Initialize();

	//delete MyWorld;
	//MyWorld = nullptr;

	return 0;
}