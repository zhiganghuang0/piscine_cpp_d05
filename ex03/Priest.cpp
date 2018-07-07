#include <iostream>
#include "Priest.hh"

Priest::Priest(std::string const& name, int level) : Character(name, level, "Priest", "Orc"), Mage(name, level)
{
    _stats[STAT_STRENGTH] = 4;
    _stats[STAT_STAMINA] = 4;
    _stats[STAT_INTEL] = 42;
    _stats[STAT_SPIRIT] = 21;
    _stats[STAT_AGILITY] = 2;
    _class = "Priest";
    _race = "Orc";
    std::cout << getName() << " enters in the order" << std::endl;
}

int Priest::CloseAttack()
{
    if (_power < 10)
        return HandleOutOfPower();
    _power -= 10;
    std::cout << getName() << " uses a spirit explosion" << std::endl;
    return 10 + _stats[STAT_SPIRIT];
}

int Priest::RangeAttack()
{
    if (_power < 25)
        return HandleOutOfPower();
    _power -= 25;
    std::cout << getName() << " launches a fire ball" << std::endl;
    return 20 + _stats[STAT_SPIRIT];
}

void Priest::Heal()
{
    if (_power < 10)
        return;
    _power -= 10;
    _pv += 70;
    if (_pv > 100)
        _pv = 100;
    std::cout << getName() << " casts a little heal spell" << std::endl;
}
