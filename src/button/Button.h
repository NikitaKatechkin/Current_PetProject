#pragma once

#include <SFML/Graphics.hpp>

#include "window/Window.h"

struct ButtonUpdateContext {
    sf::Vector2i mousePosition;
};

class Button
{
public:
    Button(const sf::Vector2f& size = sf::Vector2f(0, 0), 
           const sf::Color& backgroundColor = sf::Color::Transparent);
    ~Button();

public:
    virtual void update(const ButtonUpdateContext&);
    virtual void draw(Window&);

public:
    virtual void         setSize(const sf::Vector2f&);
    virtual sf::Vector2f getSize();

public:
    virtual void      setBackgroundColor(const sf::Color&);
    virtual sf::Color getBackgroundColor();

protected:
    sf::RectangleShape background;
    bool isMouseSetOn{false};
};