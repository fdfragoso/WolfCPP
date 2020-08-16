//
// Created by Morten Nobel-J�rgensen on 10/10/2017.
//

#include "Component.h"

Component::Component(GameObject *gameObject)
	:gameObject(gameObject)
{
}

void Component::renderSprite(sre::SpriteBatch::SpriteBatchBuilder &spriteBatchBuilder) {

}

void Component::update(float deltaTime) {
}

GameObject* Component::getGameObject() {
	return gameObject;
}

bool Component::onKey(SDL_Event &event) {
	return false;
}
bool Component::onMouse(SDL_Event& event) {
	return false;
}
void Component::onCollisionStart(PhysicsComponent* comp) {

}

void Component::onCollisionEnd(PhysicsComponent* comp) {

}
