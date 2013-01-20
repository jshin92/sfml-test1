#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{

	// Create main window
	sf::RenderWindow App(sf::VideoMode(800, 600), "SFML Shapes");

	// Start game loop
	while (App.IsOpened())
	{
		// Process events
		sf::Event Event;
		while (App.GetEvent(Event))
		{
			if (Event.Type == sf::Event::Closed)
				App.Close();
		}

		App.Clear();
		App.Draw(sf::Shape::Circle(200, 200, 100, sf::Color::Yellow,
															 10, sf::Color::Blue));

		App.Display();
	}

	return 0;
}
