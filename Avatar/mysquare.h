#ifndef MYSQUARE_H
#define MYSQUARE_H

#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

class mySquare : public QGraphicsItem {
    public:
        mySquare( int x, int y, int w, int h, QString dir );

        QRectF boundingRect() const;
        void paint( QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget );

        bool Pressed;

    protected:
        void mousePressEvent( QGraphicsSceneMouseEvent *event );

    private:
        int posX;
        int posY;
        int weight;
        int height;
        QString dirImage;
};

#endif // MYSQUARE_H
