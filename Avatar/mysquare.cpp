#include "mysquare.h"

mySquare::mySquare( int x, int y, int w, int h, QString dir ) {
    posX = x;
    posY = y;
    weight = w;
    height = h;
    dirImage = dir;
    Pressed = false;
}

QRectF mySquare::boundingRect() const {
    return QRectF( posX, posY, weight, height);
}

void mySquare::paint( QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget ) {
    QRectF rec = boundingRect();
    QImage image( dirImage );
    if( Pressed ) {
        painter -> drawImage( rec, image );
    } else {
        qDebug() << "doNothing";
    }
    QPen transPen( Qt::transparent );
    painter -> setPen( transPen );
    painter -> drawRect( rec );
}

void mySquare::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent( event );
}
