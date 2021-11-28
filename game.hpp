#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#include "utils.hpp"
#include "object.hpp"

class Game final
{ 
private:
    bool m_is_running = true;
    int m_exit_code;
    float m_minimum_d_time = 0;
    std::vector<Object>objects;
    sf::RenderWindow m_window;

public:
    Game();
    ~Game();

    int run();
    void draw();
    void quit(int exit_code = 0);
    void create_main_window();

    struct options
    {
        int width = 640;
        int heigth = 400;
        int bpp = 32;

        int font_size = 21;
        const char *game_title = "Asteroids";
        bool vsync = false;
        float max_fps = 60.f;
        const char*font_name = "static/WinterCat.ttf";
    
    };
};
