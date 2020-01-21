#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char *argv[]){

    SDL_Window * window = NULL;

    SDL_Surface * screenSurface = NULL;

    if(SDL_Init(SDL_INIT_EVERYTHING)){
        std::cout << "SDL could not initialaze! SDL_Error: " << SDL_GetError() << std::endl;
    }
    else{
        window = SDL_CreateWindow("SDL Turtorial", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 620, 480, SDL_WINDOW_SHOWN);
        if(window == NULL){
            std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        }
        else{
            screenSurface = SDL_GetWindowSurface(window);

            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xff, 0xff, 0xff));

            SDL_UpdateWindowSurface(window);

            SDL_Delay(2000);
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}