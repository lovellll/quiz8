#include "stdafx.h"
#include "monster.h"


std::string Monster::getTypeString()
{
	switch (m_monsterType)
	{
	case Dragon:		return "Dragon";
	case Goblin:		return "Goblin";
	case Ogre:			return "Ogre";
	case Orc:			return "Orc";
	case Skeleton:		return "Skeleton";
	case Troll:			return "Troll";
	case Vampire:		return "Vampire";
	case Zombie:		return "Zombie";
	}
}

void Monster::print()
{
	std::cout << m_name << " the " << getTypeString() << " has " << m_hp << " hit points and says " << m_roar << "\n";

}

Monster MonsterGenerator::generateMonster()
{
	//random names and roars
	static int type;
	static int hp;
	static int name;
	static int roar;
	static std::string s_names[6]{ "Alex1", "Alex2", "Alex3", "Alex4", "Alex5", "Alex6" };
	std::string s_roars[6]{ "Hi1","Hi2","Hi3","Hi4","Hi5","Hi6" };
	type = getRandomNumber(0, Monster::MonsterType::MAX_MONSTER_TYPES - 1);
	hp = getRandomNumber(1, 100);
	name = getRandomNumber(0, 5);
	roar = getRandomNumber(0, 5);
	return Monster(static_cast<Monster::MonsterType>(type), s_names[name], s_roars[roar], hp);
}

int MonsterGenerator::getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																				 // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}