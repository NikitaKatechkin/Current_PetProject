#include "TextButton.h"

TextButton::TextButton(const sf::Vector2f& size, 
                       const sf::Color& backgroundColor) :
    Button(size, backgroundColor) {

}

TextButton::~TextButton() {

}

void TextButton::update(const ButtonUpdateContext& buttonUpdCtx) {
    Button::update(buttonUpdCtx);
}

void TextButton::draw(Window& window) {
    Button::draw(window);
}