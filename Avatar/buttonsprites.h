#ifndef BUTTONSPRITES_H
#define BUTTONSPRITES_H

#include <vector>
#include <QString>
using namespace std;

class buttonSprites {
    public:
        buttonSprites( char sexo );
        QString getButtonHead( size_t i );
        QString getButtonBody( size_t i );
        QString getButtonLegs( size_t i );
        QString getButtonHands( size_t i );
        QString getButtonFoots( size_t i );
        QString getButtonAcc( size_t i );
    private:
        vector<QString> head;
        vector<QString> body;
        vector<QString> legs;
        vector<QString> hands;
        vector<QString> foots;
        vector<QString> acc;
};


#endif // BUTTONSPRITES_H
