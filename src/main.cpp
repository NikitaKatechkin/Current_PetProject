#include <SFML/Graphics.hpp>

#include "window/Window.h"
#include "button/Button.h"

int main()
{
    Window window;
    Button button;
    // sf::CircleShape shape(100.f);
    // shape.setFillColor(sf::Color::Green);

    button.setSize(button.getSize() / 2.f);
    button.setBackgroundColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        window.updateInput();

        window.clear();

        button.draw(window);

        window.display();
    }

    return 0;
}