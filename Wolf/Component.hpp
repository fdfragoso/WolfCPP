#pragma once

#include "sre/SpriteBatch.hpp"

class GameObject;
class PhysicsComponent;

class Component {

public:
	explicit Component(GameObject* gameObject);

	virtual ~Component() = default;

	GameObject* getGameObject();

	virtual bool onMouse(SDL_Event& event);

	virtual bool onKey(SDL_Event& event);

	virtual void update(float deltaTime);

	virtual void renderSprite(sre::SpriteBatch::SpriteBatchBuilder& spriteBatchBuilder);

	virtual void onCollisionStart(PhysicsComponent* comp);

	virtual void onCollisionEnd(PhysicsComponent* comp);

protected:
	GameObject* gameObject;

	friend class GameObject;
};