#include<SFML/Graphics.hpp>
#include<unordered_map>

class AssetManager {
public:
	AssetManager(){};
	~AssetManager(){};

	void LoadTexture(std::string name, std::string filePath);
	const sf::Texture &GetTexture(std::string name);

	void LoadFont(std::string name, std::string filePath);
	const sf::Font &GetFont(std::string name);

private:
	std::unordered_map<std::string, sf::Texture> textureMap;
	std::unordered_map<std::string, sf::Font> fontMap;



};
