#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
public:
	Character();
	~Character();
	virtual void useAbilityById(int abilityId); // does this need to be abstract??
private:
	int id;
	int health;
	bool isAI;

};

#endif //CHARACTER_HPP