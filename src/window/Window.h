#pragma once

#include <SFML/Graphics.hpp>

struct WindowContext
{
    sf::Vector2u size;
    sf::String title;
};

class Window
{
public:
    Window();
    ~Window();

public:
    void clear();
    void draw(const sf::Drawable& drawableObject);
    void display();

public:
    bool isOpen();
    void close();

public:
    void resize(const sf::Vector2u& newSize);
    sf::Vector2u getSize();
    WindowContext getContext();

public:
    void updateInput();

public:
    void updateContext(const WindowContext& context);
    void refreshWindow();

public:
    sf::Vector2i getMousePosition();

private:
    sf::RenderWindow* m_renderWindow = nullptr;
    WindowContext m_context;
    sf::Event m_event;

    sf::Mouse m_mouse;

private:
    bool isRenderWindowPtrValid();
};