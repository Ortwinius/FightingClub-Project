#ifndef SCENE_HPP
#define SCENE_HPP

#include <vector>
#include "character.hpp"
#include "pyromancer.hpp"
#include "customplayer.hpp"

class Scene
{
public:
	Scene() = default;
	~Scene() = default;
	std::vector<Character*> getCharacters();
	void addCharacterByCharacterType(const CharacterType& characterType, const bool isComputer);
	void addCustomCharacter(Character* toAdd);
private:
	std::vector<Character*> characters;
};

#endif //SCENE_HPP