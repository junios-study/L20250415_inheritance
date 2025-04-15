#pragma once

//#include "Player.h"
class APlayer;
class ASlime;
class AGoblin;
class ABoar;


//World has a Player.

class UWorld
{
public:
	APlayer* Player;
	ASlime* Slime;
	AGoblin* Goblin;
	ABoar* Boar;

public:
	void Initialize();

};

