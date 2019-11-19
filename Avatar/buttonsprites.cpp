#include "buttonsprites.h"

buttonSprites::buttonSprites( char sexo) {
    if( sexo == 'F' ) {
        head = {"/home/pimed/Avatar/woman/head/head_test.png","/home/pimed/Avatar/woman/head/head_test_2.png" };
        legs = {"/home/pimed/Avatar/woman/legs/legs.jpeg"};
        body = {"/home/pimed/Avatar/woman/body/body.jpeg"};
        hands = {"/home/pimed/Avatar/woman/hands/hands.jpeg"};
        foots = {"/home/pimed/Avatar/woman/foots/foots.jpeg"};
    } else if( sexo == 'M') {
        head = {"/home/pimed/Avatar/woman/head/head.jpeg"};
        legs = {"/home/pimed/Avatar/woman/legs/legs.jpeg"};
        body = {"/home/pimed/Avatar/woman/body/body.jpeg"};
        hands = {"/home/pimed/Avatar/woman/hands/hands.jpeg"};
        foots = {"/home/pimed/Avatar/woman/foots/foots.jpeg"};

    }
}

QString buttonSprites::getButtonHead( size_t i ) {
    return head[ i ];
}

QString buttonSprites::getButtonBody( size_t i ) {
    return body[ i ];
}

QString buttonSprites::getButtonLegs( size_t i ) {
    return legs[ i ];
}

QString buttonSprites::getButtonHands( size_t i ) {
    return hands[ i ];
}

QString buttonSprites::getButtonFoots( size_t i ) {
    return foots[ i ];
}

