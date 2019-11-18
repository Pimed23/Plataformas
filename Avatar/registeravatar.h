#ifndef REGISTERAVATAR_H
#define REGISTERAVATAR_H

#include <QDialog>
#include <QGraphicsScene>
#include "mysquare.h"
#include "womanavatar.h"

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
    void on_headBackPush_clicked();

private:
    Ui::registerAvatar *ui;
    mySquare *square;
    QGraphicsScene *scene;
    womanAvatar *wAvatar;
    static size_t headCount;
};

#endif // REGISTERAVATAR_H
