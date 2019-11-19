#ifndef AVATARSPRITES_H
#define AVATARSPRITES_H

#include <vector>
#include <QString>
using namespace std;

class avatarSprites {
    public:
        avatarSprites( char sexo );
        QString getSpriteHead( size_t i );
        QString getSpriteBody( size_t i );
        QString getSpriteLegs( size_t i );
        QString getSpriteHands( size_t i );
        QString getSpriteFoots( size_t i );
        QString getSpriteAcc( size_t i );
    private:
        vector<QString> head;
        vector<QString> body;
        vector<QString> legs;
        vector<QString> hands;
        vector<QString> foots;
        vector<QString> acc;
};

#endif // AVATARSPRITES_H
