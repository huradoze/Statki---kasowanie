#include "player.h"
#include "qevent.h"
#include "bullet.h"
#include "qgraphicsscene.h"
#include "obstacle_ice_hill.h"
#include "obstacle_fale.h"
#include "motionless.h"
#include "enemy.h"
#include "game.h" // Add this line to include the Game header
#include <QTimer>
#include <QApplication>

Player::Player(Game* game, QGraphicsItem* parent) : QObject(), QGraphicsPixmapItem(parent), game(game)
{
    setPixmap(QPixmap(":/images/player.png"));
}

// Rest of the code remains the same

void Player::keyPressEvent(QKeyEvent* event)
{
    // move the player left and right
    if (event->key() == Qt::Key_Left)
    {
        if (pos().x() > 0)
        {
            setPos(x() - moveSpeed, y());
        }
    }
    else if (event->key() == Qt::Key_Right)
    {
        if (pos().x() + 50 < 900)
        {
            setPos(x() + moveSpeed, y());
        }
    }
    else if (event->key() == Qt::Key_Up)
    {
        if (pos().y() > 0)
        {
            setPos(x(), y() - moveSpeed);
        }
    }
    else if (event->key() == Qt::Key_Down)
    {
        if (pos().y() + 50 < 900)
        {
            setPos(x(), y() + moveSpeed);
        }
    }
    else if (event->key() == Qt::Key_Space)
    {
        // create a bullet
        Bullet* bullet = new Bullet(game);
        bullet->setPos(x() + 20, y());
        scene()->addItem(bullet);
    }
}

Player::~Player()
{
    for (Motionless* object : objects)
    {
        delete object;
    }
    for (Enemy* enemy : enemies)
    {
        delete enemy;
    }
    for (Bullet* bullet : bullets)
    {
        delete bullet;
    }
}

void Player::create()
{
    Enemy* enemy = new Enemy(game);
    enemies.push_back(enemy);
    scene()->addItem(enemy);
}

void Player::create_obstacle_fale()
{
    create_motionless(new Obstacle_fale(game));
}

void Player::create_obstacle_ice_hill()
{
    create_motionless(new Obstacle_ice_hill(game));
}

void Player::create_motionless(Motionless* object)
{
    objects.push_back(object);
    scene()->addItem(object);
}


