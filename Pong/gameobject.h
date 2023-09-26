// The game-object system, very simple, just a header file with a couple of default and virtual functions

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
public:
	GameObject() = default;
	~GameObject() = default;

	virtual void update() = 0;
	virtual void render() = 0;
};

#endif