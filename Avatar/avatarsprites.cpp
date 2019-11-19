#include "avatarsprites.h"

avatarSprites::avatarSprites( char sexo ) {
    if( sexo == 'F' ) {
        head = {"/home/pimed/Avatar/woman/head/head.jpeg", "/home/pimed/Avatar/woman/head/head_1.jpeg" };
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

QString avatarSprites::getSpriteHead( size_t i ) {
    return head[ i ];
}

QString avatarSprites::getSpriteBody( size_t i ) {
    return body[ i ];
}

QString avatarSprites::getSpriteLegs( size_t i ) {
    return legs[ i ];
}

QString avatarSprites::getSpriteHands( size_t i ) {
    return hands[ i ];
}

QString avatarSprites::getSpriteFoots( size_t i ) {
    return foots[ i ];
}

