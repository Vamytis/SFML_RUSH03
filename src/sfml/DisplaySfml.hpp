/*
** EPITECH PROJECT, 2024
** B-PDG-300-PAR-3-1-PDGRUSH3-eva.legrand
** File description:
** DisplaySFML
*/

#include <SFML/Graphics.hpp>

#ifndef DISPLAYSFML_HPP_
    #define DISPLAYSFML_HPP_

#include "../IModule.hpp"
#include "../IDisplay.hpp"

class DisplaySfml : public Krell::IDisplay {
    private:
        Krell::IModule _module;
        sf::RenderWindow window;
        sf::Font font;
        sf::Text text;
    public:
        DisplaySfml();
        ~DisplaySfml();
        void launch_sfml();
        void displaySys();
        void render();
       void display();
        void processEvents();
};

#endif /* !DISPLAYSFML_HPP_ */
