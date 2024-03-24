#include "scene.hpp"

std::vector<Character*> Scene::getCharacters()
{
	return characters;
}

void Scene::addCharacterByCharacterType(const CharacterType& characterType, const bool isComputer)
{
	switch (characterType)
	{
		case PYROMANCER:
			characters.push_back(new Pyromancer(isComputer));
			break;
		case WINTERWITCH:
			//characters.push_back(new Winterwitch(false));
			break;
		/*case CUSTOM:
			break;*/
	}
}

void Scene::addCustomCharacter(Character* toAdd)
{
	characters.push_back(toAdd);
}
