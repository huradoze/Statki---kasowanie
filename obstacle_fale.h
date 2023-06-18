#ifndef OBSTACLE_FALE_H
#define OBSTACLE_FALE_H

#include "Motionless.h"
#include "game.h"

class Game;

class Obstacle_fale: public Motionless
{
    Q_OBJECT
public:

    Obstacle_fale(Game* game);

    void attribute();

public slots:

    void collision();
private:
    Game* game; // Pointer to Game
};

#endif // OBSTACLE_FALE_H
