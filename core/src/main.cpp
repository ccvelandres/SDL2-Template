#include <SDL2/SDL.h>
#include <iostream>

int main(int arc, char ** argv) {

    if (SDL_Init( SDL_INIT_EVERYTHING ) != 0) {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
    SDL_Window *window = SDL_CreateWindow("SDL2 Template", 0, 0, 800, 600, SDL_WINDOW_SHOWN);
    
    SDL_Delay(2000);
    
    SDL_DestroyWindow(window);
    
    return 0;
}