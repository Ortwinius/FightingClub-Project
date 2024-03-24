#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "character.hpp"

class CustomPlayer : public Character
{
public:
	CustomPlayer(int health, const bool isAI, const CharacterType& characterType, const std::vector<Ability> abilities)
	{
		this->health = health;
		this->isAI = isAI;
		this->characterType = characterType;
		this->abilities = abilities;
	}

	~CustomPlayer() override = default;

	void useAbilityById(int abilityId) override
	{
		std::cout << "custom using ability" << std::endl;
	}
	void takeDamage() override
	{
		std::cout << "custom taking damage" << std::endl;
	}
private:

};

#endif //PLAYER_HPP