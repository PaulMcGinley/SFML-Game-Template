#include <SFML/Graphics.hpp>

int main()
{
	// Form configuration
    unsigned int width = 800U;
    unsigned int height = 600U;
	std::string title = "Game title here";

	sf::Color clearColour = sf::Color(0, 0, 0, 255);

    sf::RenderWindow window(sf::VideoMode({ width, height }), title);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear(clearColour);

		// Update code here
		// ...

        // Draw code here
        // ...

        window.display();
    }
}