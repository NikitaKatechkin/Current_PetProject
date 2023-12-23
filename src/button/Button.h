#pragma once

#include <SFML/Graphics.hpp>

#include "window/Window.h"

class Button
{
public:
    Button(const sf::Vector2f& size = sf::Vector2f(0, 0), 
           const sf::Color& backgroundColor = sf::Color::Transparent);
    ~Button();

public:
    void draw(Window&);

public:
    void         setSize(const sf::Vector2f&);
    sf::Vector2f getSize();

public:
    void      setBackgroundColor(const sf::Color&);
    sf::Color getBackgroundColor();

private:
    sf::RectangleShape background;
};