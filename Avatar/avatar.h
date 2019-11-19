#ifndef AVATAR_H
#define AVATAR_H

#include <vector>
#include <QString>
using namespace std;

class avatar {
    public:
        avatar();
        avatar( QString, QString, QString, QString, QString );
        void generateAvatar( QString, QString, QString, QString, QString );

    private:
        QString head;
        QString body;
        QString legs;
        QString hands;
        QString foots;
        QString acc;

};

#endif // AVATAR_H
