#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <map>
#include <string>
#include "./TextureManager.h"
#include "./EntityManager.h"

class AssetManager {
    private:
        EntityManager * manager;
        std::map<std::string, SDL_Texutre*> textures;
    public:
        AssetManager(EntityManager * manager);
        ~AssetManager();
        void ClearData();
        void AddTexture(std::string textureld, const char *filePath);
        SDL_Texture * GetTexture(std::string textureld);
};

#endif // ASSETMANAGER_H