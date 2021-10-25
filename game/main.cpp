#include <SFML/Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;

int main()
{
    bool game_over = false;

        RenderWindow *ventana;

        ventana = new RenderWindow(VideoMode(800,600), "juego");

    while(!game_over){

        ventana->clear();
        ventana->display();

    }

    return 0;

}
