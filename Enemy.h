#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>

// Forward declaration of Game class
class Game;

class Enemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Enemy(Game* game);

public slots:
    void move_to();
    void collision();

private:
    Game* game; // Pointer to Game
};

#endif // ENEMY_H

