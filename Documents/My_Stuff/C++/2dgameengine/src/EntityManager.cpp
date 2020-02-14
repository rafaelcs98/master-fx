#include "./EntityManager.h"


void EntityManager::ClearData() {
    for (auto& entity: entities) {
        entity->Destroy();
    }
}

bool EntityManager::HasNoEntities() {
    return entities.size() == 0;
}

void EntityManager::Update(float deltaTime) {
    for (auto& entity: entities) {
        entity->Update(deltaTime);
    }
}

void EntityManager::Render() {
    for (auto& entity: entities) {
        entity->Render();
    }
}

Entity& EntityManager::AddEntity(std::string entityName) {
    Entity *entity = new Entity(*this, entityName);
    entities.emplace_back(entity);
    return *entity;
}

std::vector<Entity*> EntityManager::GetEntities() const {
    return entities;
}

unsigned int EntityManager::GetEntityCount() {
    return entities.size();
}

void EntityManager::PrintEntities() {
    for (std::vector<Entity*>::iterator it = entities.begin(); it != entities.end(); ++it) {
        std::cout << "Entity name: " << (*it)->name << std::endl;
        std::cout << "Entity<TransformComponent>" << std::endl;
    }
}
