#ifndef OBSTACLE_ICE_HILL_H
#define OBSTACLE_ICE_HILL_H

#include "Motionless.h"
#include "game.h"

class Game;

class Obstacle_ice_hill: public Motionless
{
    Q_OBJECT
public:

    Obstacle_ice_hill(Game* game);


    void attribute();

public slots:

    void collision();
private:
    Game* game; // Pointer to Game
};

#endif // OBSTACLE_ICE_HILL_H
