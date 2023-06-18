#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QTimer>
#include "Player.h"
#include "Score.h"
#include "Health.h"
#include "enemy.h"

// Forward declaration of Player class
class Player;

class Game : public QGraphicsView
{
    Q_OBJECT
public:
    Game(QWidget *parent = nullptr);

    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Health *health;
    QTimer *endOfGame;

    void ifGameOver();


private:
    QTimer *timer;
    QTimer *timer1;
    QTimer *timer2;
};

#endif // GAME_H
