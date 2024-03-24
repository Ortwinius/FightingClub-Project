#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <vector>
#include "utils.hpp"
#include "ability.hpp"

// abstract interface class
class Character
{
public:
	// standard init constructor (object is uninitialized with id -1)
	Character()
	{
		this->id = -1;
		this->health = -1;
		this->isAI = false;
		this->characterType = UNINITIALIZED;
		this->abilities = {};
	}
	// standard constructor
	Character(int id, int health, bool isAI, const CharacterType& characterType, const std::vector<Ability>& abilities)
	{
		this->id = id;
		this->health = health;
		this->isAI = isAI;
		this->characterType = characterType;
		this->abilities = abilities;
	}
	// copy constructor
	Character(const Character& other)
	{
		this->id = other.id;
		this->health = other.health;
		this->isAI = other.isAI;
		this->characterType = other.characterType;
		this->abilities = other.abilities;
	}
	// standard destructor
	virtual ~Character() = default;

	// getters
	const CharacterType& getCharacterType() const { return characterType; }
	const int getHealth() const { return health; }
	const bool isComputer() const { return isAI; }
	const std::vector<Ability>& getAbilities() const { return abilities; }

	// functions to be implemented by child classes
	virtual void useAbilityById(int abilityId) = 0;
	virtual void takeDamage() = 0;

protected:
	int id;
	int health;
	bool isAI;
	CharacterType characterType;
	std::vector<Ability> abilities;
};

#endif //CHARACTER_HPP