#include<iostream>
#include<string.h>

using namespace std;


class Persona{

    protected: string nombres,apellidos,celular,direccion;

    protected:
     Persona(){}
     Persona(string Nombre,string Apellido,string Celular,string Direccion){
         nombres = Nombre;
         apellidos = Apellido;
         celular = Celular;
         direccion = Direccion;
     }

};