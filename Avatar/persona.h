#ifndef PERSONA_H
#define PERSONA_H

#include <QString>
#include "avatar.h"

class Persona {
    public:
        Persona();
        Persona( QString nombre, QString apellido, QString correo, char sexo, int edad, int dni );

        void generateAvatar( QString head, QString body, QString legs, QString hands, QString foots );
        char getSexo();

    private:
        QString nombre;
        QString apellido;
        QString correo;
        char sexo;
        int edad;
        int dni;

        avatar avat;
};

#endif // PERSONA_H
