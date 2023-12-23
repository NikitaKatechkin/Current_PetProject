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

void Button::setBackgroundColor(const sf::Color& color) {
    background.setFillColor(color);
}

sf::Color Button::getBackgroundColor() {
    return background.getFillColor();
}
