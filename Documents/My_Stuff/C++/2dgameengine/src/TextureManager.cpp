#include "./TextureManager.h"

SDL_Texture * TextureManager::LoadTexture(const char * fileName) {
    SDL_Surface * surface = IMG_Load(fileName);
    SDL_Texture * texture = SDL_CreateTextureFromSurface(Game::renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
} 

void TextureManager::Draw(SDL_Texture * texture, SDL_Rect src, SDL_Rect dst, SDL_RendererFlip flip) {
    SDL_RenderCopyEx(Game::renderer, texture, &src, &dst, 0.0, NULL, flip);
}
