#include <SFML/Graphics.hpp>

#include "window/Window.h"
#include "button/Button.h"
#include "button/TextButton.h"

#include <sstream>

static bool DEBUG_MODE = true;

int main()
{
    Window window;

    Button button({75.f, 50.f}, sf::Color::Cyan);

    TextButton textButton({75.f, 50.f}, sf::Color::Magenta);
    textButton.setPosition(sf::Vector2f(window.getSize()) / 2.f);

    sf::Font font;
    if (not font.loadFromFile("C:\\Users\\NikiBot\\source\\repos\\Game_PetProject\\assets\\fonts\\arial.ttf")) {
        return 0;
    }

    sf::Text text(sf::String(""), font, 10);

    while (window.isOpen())
    {
        window.updateInput();
        
        button.update({window.getMousePosition()});
        textButton.update({window.getMousePosition()});

        window.clear();

        button.draw(window);
        textButton.draw(window);

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