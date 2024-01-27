/*
** EPITECH PROJECT, 2024
** B-PDG-300-PAR-3-1-PDGRUSH3-eva.legrand
** File description:
** DisplaySfml
*/

#include "DisplaySfml.hpp"

DisplaySfml::DisplaySfml() : window(sf::VideoMode(800, 600), "SFML Window")
{
    launch_sfml();
}


DisplaySfml::~DisplaySfml()
{
}

void DisplaySfml::display()
{
    while (window.isOpen()) {
        launch_sfml();
        render();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void DisplaySfml::launch_sfml(void)
{
    sf::Event event;
    font.loadFromFile("./src/sfml/RobotoRegular.ttf");
    text.setString("Bonjour, SFML !");
    text.setFont(font);
    text.setCharacterSize(29);
    text.setFillColor(sf::Color::White);
    text.setPosition(10, 10);
    while (window.isOpen()) {
        window.clear(sf::Color::Black);
        window.draw(text);
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.display();
    }
}
