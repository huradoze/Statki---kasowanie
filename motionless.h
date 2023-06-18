#ifndef MOTIONLESS_H
#define MOTIONLESS_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Motionless : public QGraphicsPixmapItem, public QObject
{
public:
    Motionless(); // Add the constructor declaration

    int scale;

    virtual void attribute() = 0;
    virtual void collision() = 0;
};

#endif  // MOTIONLESS_H
