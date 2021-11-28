#include "object.hpp"


Object::Object(std::string _name):name(_name)
{
    this->id = __COUNTER__;
}
Object::Object()
{
}

Object::~Object()
{
}


void Object::draw(sf::RenderTarget& target,sf::RenderStates states)const{

    target.draw(this->sprite, states);

}