// quiz8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "monster.h"
#include <ctime>
#include <cstdlib>


int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value

	Monster m = MonsterGenerator::generateMonster();
	m.print();


	return 0;
}