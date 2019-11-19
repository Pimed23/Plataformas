#include "persona.h"

Persona *pers;

Persona::Persona() {
}

Persona::Persona( QString nombre, QString apellido, QString correo, char sexo, int edad, int dni ) {
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> correo = correo;
    this -> sexo = sexo;
    this -> edad = edad;
    this -> dni = dni;
}

void Persona::generateAvatar( QString head, QString body, QString legs, QString hands, QString foots ) {
    avat.generateAvatar( head, body, legs, hands, foots );
}

char Persona::getSexo() {
    return sexo;
}


