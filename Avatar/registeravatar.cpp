#include "registeravatar.h"
#include "ui_registeravatar.h"

registerAvatar::registerAvatar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerAvatar)
{
    ui -> setupUi(this);
    scene = new QGraphicsScene( this );
    ui -> avatar -> setScene( scene );

    if( pers -> getSexo() == 'F' ) {
        avatS = new avatarSprites('F');
        buttS = new buttonSprites('F');
        QPixmap avatar_mujer("/home/pimed/Avatar/woman/avatar_mujer.jpg");
        scene -> addPixmap( avatar_mujer ); // 86, 14, 85, 53

        QPixmap head("/home/pimed/Avatar/woman/head/head_test_0.png");
        ui -> headLabel -> setPixmap( head );

    } else if( pers -> getSexo() == 'M' ) {
        qDebug() << "Es hombre";
    }
}

size_t registerAvatar::headCount = 0;
size_t registerAvatar::bodyCount = 0;
size_t registerAvatar::legsCount = 0;
size_t registerAvatar::handsCount = 0;
size_t registerAvatar::footsCount = 0;
size_t registerAvatar::accCount = 0;

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

    QString dirAvat = avatS -> getSpriteHead( headCount );
    square = new mySquare( 86, 14, 85, 53, dirAvat );
    scene -> addItem( square );

    QString dirButt = buttS -> getButtonHead( headCount ); // ERROR
    qDebug() << dirButt;
    QPixmap head( dirButt );
    ui -> headLabel -> setPixmap( head );

    ++headCount;
}

void registerAvatar::on_bodyNextPush_clicked() {
    if( bodyCount == 1 ) {
        bodyCount = 0;
    }

    QString dirAvat = avatS -> getSpriteBody( bodyCount );
    square = new mySquare( 78, 82, 99, 105, dirAvat );
    scene -> addItem( square );

    ++bodyCount;
}

void registerAvatar::on_legsNextPush_clicked() {
    if( legsCount == 1 ) {
        legsCount = 0;
    }

    QString dirAvat = avatS -> getSpriteLegs( legsCount );
    square = new mySquare( 94, 165, 69, 162, dirAvat );
    scene -> addItem( square );

    ++legsCount;
}

void registerAvatar::on_handsNextPush_clicked() {
    if( handsCount == 1 ) {
        handsCount = 0;
    }

    QString dirAvat = avatS -> getSpriteHands( handsCount );
    square = new mySquare( 78, 152, 99, 74, dirAvat );
    scene -> addItem( square );

    ++handsCount;
}

void registerAvatar::on_footsNextPush_clicked() {
    if( footsCount == 1 ) {
        footsCount = 0;
    }

    QString dirAvat = avatS -> getSpriteFoots( footsCount );
    square = new mySquare( 86, 286, 84, 59, dirAvat );
    scene -> addItem( square );

    ++footsCount;
}
