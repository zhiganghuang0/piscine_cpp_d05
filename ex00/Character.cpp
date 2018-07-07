#include <string>
#include <iostream>
#include "Character.hh"

Character::Character(const std::string &name, int level)
{
	_name = name;
	_lv = level;
	_power = 100;
	_maxPower = 100;
	_pv = 100;
	_maxPv = 100;
	_class = "Character";
	_race = "Koala";
	_carac = Characteristics(5, 5, 5, 5, 5);
	Range = Character::CLOSE;
	std::cout << _name << " Created" << std::endl;
}
Character::~Character(){}

const std::string Character::getName() const {return _name;}
size_t Character::getLvl() const { return _lv;}
size_t Character::getPower() const { return _power; }
size_t Character::getPv() const { return _pv;}
/*Character(const std::string &, int)
• const std::string &getName() const
• int getLvl() const
• int getPv() const
• int getPower() const*/
