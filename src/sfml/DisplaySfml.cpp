/*
** EPITECH PROJECT, 2024
** B-PDG-300-PAR-3-1-PDGRUSH3-eva.legrand
** File description:
** DisplaySfml
*/

#include "DisplaySfml.hpp"

DisplaySfml::DisplaySfml() : window(sf::VideoMode(800, 600), "SFML Window")
{
    if (!font.loadFromFile("./RobotoRegular.ttf")) {
        std::cerr << "Failed to load font 'Roboto-Regular.ttf'" << std::endl;
    } else {
        std::cout << "Font 'Roboto-Regular.ttf' loaded successfully" << std::endl;
    }
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

void DisplaySfml::render()
{
    window.clear();

  //  displayRam();
   // displayCpu();

    displaySys();
    window.display();
}

void DisplaySfml::displaySys()
{
    window.clear();
    text.setString("Bonjour, SFML !");
    text.setFont(font);
    text.setCharacterSize(29);
    text.setFillColor(sf::Color::White);
    text.setPosition(10, 10);
    // text.setFont(font);
    // text.setCharacterSize(18);
    // text.setFillColor(sf::Color::White);
    // text.setPosition(10, 250);

    // text.setString("System Information");
    // window.draw(text);

    // text.setString("User: " + _module._SysInfoModule->GetUser());
    // text.setPosition(10, 280);
    // window.draw(text);

    // text.setString("Cpu: " + _module._SysInfoModule->getCpu());
    // text.setPosition(10, 310);
    // window.draw(text);

    // text.setString("OS: " + _module._SysInfoModule->OsInfo());
    // text.setPosition(10, 340);
    // window.draw(text);

    // text.setString("Kernel: " + _module._SysInfoModule->GetKernem());
    // text.setPosition(10, 370);
    // window.draw(text);

    // long int all_seconds = _module._SysInfoModule->GetUpTime();
    // int hours = all_seconds / 3600;
    // int minutes = (all_seconds % 3600) / 60;
    // int seconds = all_seconds % 60;

    // text.setString("Uptime: " + std::to_string(hours) + "h " + std::to_string(minutes) + "m " + std::to_string(seconds) + "s");
    // text.setPosition(10, 400);
     window.draw(text);
      window.display();
}

/*void DisplaySfml::displayPercentSFML(float percent, float posY)
{
    sf::RectangleShape progressBar(sf::Vector2f(window.getSize().x - 20, 20));
    progressBar.setPosition(10, posY);
    progressBar.setFillColor(sf::Color::Black);

    float progressWidth = (window.getSize().x - 20) * (percent / 100.0f);
    sf::RectangleShape progress(sf::Vector2f(progressWidth, 20));

    progress.setPosition(10, posY);
    progress.setFillColor(sf::Color::White);

    window.draw(progressBar);
    window.draw(progress);
}*/

// void DisplaySfml::displayRam()
// {
//      _module._RamModule->get_ram_usage();
//     text.setFont(font);
//     text.setCharacterSize(16);
//     text.setFillColor(sf::Color::White);
//     text.setPosition(10, 50);

//     text.setString("Current RAM");
//     window.draw(text);

//     displayPercentSFML(_module._RamModule->_ram_usage, window.getSize().y - 50);

//     float ram_used = _module._RamModule->_total_ram - _module._RamModule->_free_ram;

//     text.setString("RAM Usage: " + std::to_string(static_cast<int>(_module._RamModule->_ram_usage)) + "%");
//     text.setPosition(10, 80);
//     window.draw(text);

//     text.setString("Used: " + std::to_string(static_cast<int>(ram_used)) + " KB");
//     text.setPosition(10, 110);
//     window.draw(text);

//     text.setString("Free: " + std::to_string(static_cast<int>(_module._RamModule->_free_ram)) + " KB");
//     text.setPosition(10, 140);
//     window.draw(text);
// }

// void DisplaySfml::displayCpu()
// {
//     text.setFont(font);
//     text.setCharacterSize(16);
//     text.setFillColor(sf::Color::White);
//     text.setPosition(10, 200);

//     text.setString("Current CPU");
//     window.draw(text);

//     displayPercentSFML(_module._CpuModule->TotalCPUpercent(_module._CpuModule->getTotalCpu()), window.getSize().y - 200);
// }

void DisplaySfml::launch_sfml(void)
{
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}
