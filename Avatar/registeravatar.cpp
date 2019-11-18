#include "registeravatar.h"
#include "ui_registeravatar.h"

registerAvatar::registerAvatar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerAvatar)
{
    ui -> setupUi(this);
    scene = new QGraphicsScene( this );
    ui -> avatar -> setScene( scene );

    QPixmap head("/home/pimed/Avatar/woman/head_test.png");
    ui -> headLabel -> setPixmap( head );

    QPixmap avatar_mujer("/home/pimed/Avatar/woman/avatar_mujer_dimension.jpeg");
    scene -> addPixmap( avatar_mujer ); // 86, 14, 85, 53

    wAvatar = new womanAvatar();
}

size_t registerAvatar::headCount = 0;

registerAvatar::~registerAvatar() {
    delete ui;
}


void registerAvatar::on_backPush_3_clicked() {
    emit( back());
}

void registerAvatar::on_registerPush_3_clicked() {
    emit( back());
}

void registerAvatar::on_headNextPush_clicked() {
    if( headCount == 2 ) {
        headCount = 0;
    }

    QString dir = wAvatar -> head[ headCount ];
    qDebug() << dir;
    square = new mySquare( 86, 14, 85, 53, dir );
    scene -> addItem( square );

    ++headCount;
}

void registerAvatar::on_headBackPush_clicked() {
    if( headCount > 1 ) {
        headCount = 1;
    }

    QString dir = wAvatar -> head[ headCount ];
    qDebug() << dir;
    square = new mySquare( 86, 14, 85, 53, dir );
    scene -> addItem( square );

    --headCount;
}
