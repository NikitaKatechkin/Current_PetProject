#include <SFML/Graphics.hpp>

#include "window/Window.h"
#include "button/Button.h"

#include <sstream>

static bool DEBUG_MODE = true;

int main()
{
    Window window;

    Button button;
    button.setSize({150.f, 100.f});
    button.setSize(button.getSize() / 2.f);
    button.setBackgroundColor(sf::Color::Cyan);

    sf::Font font;
    if (not font.loadFromFile("C:\\Users\\NikiBot\\source\\repos\\Game_PetProject\\assets\\fonts\\arial.ttf")) {
        return 0;
    }

    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(10);

    while (window.isOpen())
    {
        window.updateInput();
        button.update({window.getMousePosition()});

        window.clear();

        button.draw(window);

        if (DEBUG_MODE) {
            auto windowSize = window.getSize();
            auto mousePosition = window.getMousePosition();

            std::stringstream debugInfo;
            debugInfo << "Window width: " << windowSize.x << std::endl;
            debugInfo << "Window height: " << windowSize.y << std::endl;
            debugInfo << std::endl;
            debugInfo << "Mouse positionX: " << mousePosition.x << std::endl;
            debugInfo << "Mouse positionY: " << mousePosition.y << std::endl;

            text.setString(sf::String(debugInfo.str().c_str()));
            text.setPosition(0, window.getSize().y - text.getLocalBounds().height);
            debugInfo.clear();

            window.draw(text);
        }

        window.display();
    }

    return 0;
}