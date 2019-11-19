#include "avatar.h"

avatar::avatar() {
}

avatar::avatar( QString head, QString body, QString legs, QString hands, QString foots ) {
    generateAvatar( head, body, legs, hands, foots );
}

void avatar::generateAvatar( QString head, QString body, QString legs, QString hands, QString foots ) {
    this -> head = head;
    this -> body = body;
    this -> legs = legs;
    this -> hands = hands;
    this -> foots = foots;
}
