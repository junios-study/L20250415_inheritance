#include <iostream>
#include "World.h"

using namespace std;

int main()
{
	UWorld* MyWorld = new UWorld();

	MyWorld->Initialize();


	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}