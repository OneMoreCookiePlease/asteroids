#include "game.hpp"
Game::Game(/* args */)
{
}

Game::~Game()
{
}

int Game::run()
{
    create_main_window();

    while (m_is_running)
    {
        sf::Event event;
        while (m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                m_window.close();
                quit();
            }
        }
        m_window.clear();
        m_window.display();
    }

    return 1;
}

void Game::create_main_window()
{
    struct options op;
    m_window.create(sf::VideoMode(op.width, op.heigth), op.game_title);
    m_window.setFramerateLimit(op.max_fps);
}

void Game::quit(int exit_code)
{
    m_exit_code = exit_code;
    m_is_running = false;
}