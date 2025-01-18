// GameObject.h

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

// Base class for all game objects
class GameObject {
public:
    GameObject();
    virtual ~GameObject();

    // Common methods for all game objects
    virtual void update() = 0;
    virtual void render() = 0;

protected:
    std::string name;
    int id;
};

// Derived class for a specific game object, e.g., Player
class Player : public GameObject {
public:
    Player();
    ~Player();

    // Player-specific methods
    void update() override;
    void render() override;

    // Getters and setters
    int getHealth() const;
    void setHealth(int health);

private:
    int health;
    int score;
};

// Derived class for another specific game object, e.g., Enemy
class Enemy : public GameObject {
public:
    Enemy();
    ~Enemy();

    // Enemy-specific methods
    void update() override;
    void render() override;

    // Getters and setters
    int getDamage() const;
    void setDamage(int damage);

private:
    int damage;
    int speed;
};

#endif // GAMEOBJECT_H
