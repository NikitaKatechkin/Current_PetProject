#include "Button.h"

Button::Button() :
    background({sf::Vector2f(150, 100)})
{
    background.setFillColor(sf::Color::Magenta);
}

Button::~Button() {

}

void Button::draw(Window& window) {
    window.draw(background);
}

void Button::setSize(const sf::Vector2f& size) {
    background.setSize(size);
}

sf::Vector2f Button::getSize() {
    return background.getSize();
}
