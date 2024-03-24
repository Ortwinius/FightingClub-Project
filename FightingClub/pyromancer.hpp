#ifndef PYROMANCER_HPP
#define PYROMANCER_HPP

#include "character.hpp"

class Pyromancer : public Character
{
public:
	Pyromancer(bool isAI)
	{
		this->health = 100;
		this->isAI = isAI;
		this->characterType = PYROMANCER;
		this->abilities.push_back(Ability(FIREBLAZE));
	}

	~Pyromancer() override = default;

	void useAbilityById(int abilityId) override
	{
		std::cout << "custom using ability" << std::endl;
	}
	void takeDamage() override
	{
		std::cout << "custom taking damage" << std::endl;
	}
};

#endif //PYROMANCER_HPP