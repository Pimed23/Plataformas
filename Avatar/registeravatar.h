#ifndef REGISTERAVATAR_H
#define REGISTERAVATAR_H

#include <QDialog>
#include <QGraphicsScene>
#include <QList>
#include "mysquare.h"
#include "avatarsprites.h"
#include "buttonsprites.h"
#include "persona.h"

extern Persona *pers;

namespace Ui {
class registerAvatar;
}

class registerAvatar : public QDialog
{
    Q_OBJECT

public:
    explicit registerAvatar(QWidget *parent = nullptr);
    ~registerAvatar();

signals:
    void back();

private slots:
    void on_backPush_3_clicked();
    void on_registerPush_3_clicked();
    void on_headNextPush_clicked();
    void on_bodyNextPush_clicked();
    void on_legsNextPush_clicked();
    void on_handsNextPush_clicked();
    void on_footsNextPush_clicked();

private:
    Ui::registerAvatar *ui;
    mySquare *square;
    QGraphicsScene *scene;
    avatarSprites *avatS;
    buttonSprites *buttS;
    static size_t headCount;
    static size_t bodyCount;
    static size_t legsCount;
    static size_t handsCount;
    static size_t footsCount;
    static size_t accCount;
};

#endif // REGISTERAVATAR_H
