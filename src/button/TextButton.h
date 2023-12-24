#pragma once

#include "Button.h"

class TextButton : public Button
{
public:
    TextButton(const sf::Vector2f& size = sf::Vector2f(0, 0), 
           const sf::Color& backgroundColor = sf::Color::Transparent);
    ~TextButton();

public:
    virtual void update(const ButtonUpdateContext&) override;
    virtual void draw(Window&) override;
};