#pragma once
#include <string>
#include <iostream>



class Monster
{
public:
	enum MonsterType
	{
		Dragon, 
		Goblin, 
		Ogre, 
		Orc, 
		Skeleton, 
		Troll, 
		Vampire, 
		Zombie,
		MAX_MONSTER_TYPES,
	};

private:
	MonsterType m_monsterType;
	std::string m_name;
	std::string m_roar;
	int m_hp;

public:
	Monster(MonsterType monsterType,std::string name,std::string roar,int hp):
		m_monsterType(monsterType),m_name(name),m_roar(roar),m_hp(hp)
	{
	}

	std::string getTypeString();
	void print();
	

};

class MonsterGenerator
{
	
	
public:
	MonsterGenerator()
	{
	}

	static Monster generateMonster();
	static int getRandomNumber(int min, int max);

	
};


