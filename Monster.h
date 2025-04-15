#pragma once
class AMonster
{
public:
	void Attack();
	void Die();

protected:
	int HP;
	int Gold;

	void Drop();
};

