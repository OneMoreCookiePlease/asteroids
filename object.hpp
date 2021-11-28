#pragma once
#include <string>
#include <SFML/Graphics.hpp>

#include "utils.hpp"

class Object : public sf::Drawable
{
private:
    int x;
    int y;
    int id;
    const std::string name;
    sf::Sprite sprite;

    void loadSprite();

public:
    int getX();
    int getY();
    std::string getName();
    void setPosition(int x, int y);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    Object(std::string name);
    Object();
    ~Object();
};
