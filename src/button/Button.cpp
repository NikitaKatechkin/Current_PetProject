#include "Button.h"

Button::Button(const sf::Vector2f& size, const sf::Color& backgroundColor) {
    setSize(size);
    setBackgroundColor(backgroundColor);
}

Button::~Button() {

}

void Button::update(const ButtonUpdateContext& buttonUpdCtx) {
    bool isMouseIntersectsWithButton = background.getLocalBounds().intersects({
        static_cast<float>(buttonUpdCtx.mousePosition.x), 
        static_cast<float>(buttonUpdCtx.mousePosition.y), 
        1.f, 
        1.f
    });

    if (isMouseSetOn != isMouseIntersectsWithButton) {
        isMouseSetOn = isMouseIntersectsWithButton;

        auto currentColor = getBackgroundColor();
        currentColor.a = (isMouseSetOn) ? 125 : 255;

        setBackgroundColor(currentColor);
    }
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
