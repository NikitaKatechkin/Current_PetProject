#pragma once

#include <SFML/Graphics.hpp>

#include "window/Window.h"

class Button
{
public:
    Button(/* args */);
    ~Button();

public:
    void draw(Window&);

public:
    void         setSize(const sf::Vector2f& size);
    sf::Vector2f getSize();

private:
    sf::RectangleShape background;
};