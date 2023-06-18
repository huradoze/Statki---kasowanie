#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QObject>

// Forward declaration of Game class
class Game;

class Bullet: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Bullet(Game* game, QGraphicsItem *parent = nullptr);

public slots:
    void move();

private:
    Game* game; // Pointer to Game
};

#endif // BULLET_H

