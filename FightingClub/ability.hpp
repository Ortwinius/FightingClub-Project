#ifndef ABILITY_HPP
#define ABILITY_HPP

#include "utils.hpp"

class Ability
{
public:
	Ability(const AbilityType& abilityType)
		: abilityType(abilityType)
	{}
	~Ability() {}
private:
	AbilityType abilityType;

};
#endif //ABILITY_HPP