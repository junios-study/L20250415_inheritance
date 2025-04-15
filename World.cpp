
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

void UWorld::Initialize()
{
	Player = new APlayer();
	Goblin = new AGoblin();
	Slime = new ASlime();
	Boar = new ABoar();
}
