<<<<<<< HEAD
#include "Persona.cpp"

class Empleado:Persona{

    private: string codigo_empleado,sueldo,puesto;

    public:
        Empleado(){}
        Empleado(string Nombre,string Apellido,string Celular,string Direccion,string Codigo_empleado,string Sueldo,string Puesto):Persona(Nombre,Apellido,Celular,Direccion){

            codigo_empleado = Codigo_empleado;
            sueldo= Sueldo;
            puesto = Puesto;
        }

        void Mostrar(){
            cout<<"=================DATOS EMPLEADO===========================\n"<<endl;
            cout<<"Codigo Empleado: "<<codigo_empleado<<endl;
            cout<<"Nombre: "<<nombres<<endl;
            cout<<"Apellidos: "<<apellidos<<endl;
            cout<<"Direccion: "<<direccion<<endl;
            cout<<"Celular: "<<celular<<endl;
            cout<<"Puesto: "<<puesto<<endl;
            cout<<"Sueldo: Q. "<<sueldo<<endl;
            cout<<"\n"<<endl;
        }
    //editar datos

    void SetNombres(string Nombre){nombres = Nombre;}
    void SetApellido(string Apellido){apellidos = Apellido;}
    void SetDireccion(string Direccion){direccion = Direccion;}
    void SetCelular(string Celular){celular = Celular;}
    void SetCodigoEmpleado(string Codigo_empleado){codigo_empleado = Codigo_empleado;}
    void SetPuesto(string Puesto){puesto = Puesto;}
    void SetSueldo(string Sueldo){sueldo = Sueldo;}


    //Mostrar datos
    string GetNombres(){return nombres;}
    string GetApellidos(){return apellidos;}
    string GetDireccion(){return direccion;}
    string GetCelular(){return celular;}
    string GetCodigoEmpleado(){return codigo_empleado;}
    string GetPuesto(){return puesto;}
    string GetSueldo(){return sueldo;}
    
};



class Cliente : Persona{
	
	private : string nit;
	
	public :
	Cliente(){
	}
	Cliente(string Nombre,string Apellido,string Celular,string Direccion,string Nit):Persona(Nombre,Apellido,Celular,Direccion){
		nit = Nit;
	}
	
	void mostrar(){
          cout<<"===================DATOS CLIENTE=========================\n"<<endl;
          cout<<"Nit: "<<nit<<endl;
          cout<<"Nombre: "<<nombres<<endl;
          cout<<"Apellidos: "<<apellidos<<endl;
          cout<<"Direccion: "<<direccion<<endl;
          cout<<"Celular: "<<celular;
          cout<<"\n"<<endl;
	}

    //editar datos

    void SetNombres(string Nombre){nombres = Nombre;}
    void SetApellido(string Apellido){apellidos = Apellido;}
    void SetDireccion(string Direccion){direccion = Direccion;}
    void SetCelular(string Celular){celular = Celular;}
    void SetNit(string Nit){nit = Nit;}


    //Mostrar datos
    string GetNombres(){return nombres;}
    string GetApellidos(){return apellidos;}
    string GetDireccion(){return direccion;}
    string GetCelular(){return celular;}
    string GetNit(){return nit;}
=======
#include "Persona.cpp"

class Empleado:Persona{

    private: string codigo_empleado;

    public:
        Empleado(){}
        Empleado(string Nombre,string Apellido,string Celular,string Direccion,string Codigo_empleado):Persona(Nombre,Apellido,Celular,Direccion){

            codigo_empleado = Codigo_empleado;
        }

        void Mostrar(){
            cout<<"=================DATOS EMPLEADO===========================\n"<<endl;
            cout<<"Codigo Empleado: "<<codigo_empleado<<endl;
            cout<<"Nombre: "<<nombres<<endl;
            cout<<"Apellidos: "<<apellidos<<endl;
            cout<<"Direccion: "<<direccion<<endl;
            cout<<"Celular: "<<celular;
            cout<<"\n"<<endl;
        }
    //editar datos

    void SetNombres(string Nombre){nombres = Nombre;}
    void SetApellido(string Apellido){apellidos = Apellido;}
    void SetDireccion(string Direccion){direccion = Direccion;}
    void SetCelular(string Celular){celular = Celular;}
    void SetCodigoEmpleado(string Codigo_empleado){codigo_empleado = Codigo_empleado;}


    //Mostrar datos
    string GetNombres(){return nombres;}
    string GetApellidos(){return apellidos;}
    string GetDireccion(){return direccion;}
    string GetCelular(){return celular;}
    string GetCodigoEmpleado(){return codigo_empleado;}
    
};



class Cliente : Persona{
	
	private : string nit;
	
	public :
	Cliente(){
	}
	Cliente(string Nombre,string Apellido,string Celular,string Direccion,string Nit):Persona(Nombre,Apellido,Celular,Direccion){
		nit = Nit;
	}
	
	void mostrar(){
          cout<<"===================DATOS CLIENTE=========================\n"<<endl;
          cout<<"Nit: "<<nit<<endl;
          cout<<"Nombre: "<<nombres<<endl;
          cout<<"Apellidos: "<<apellidos<<endl;
          cout<<"Direccion: "<<direccion<<endl;
          cout<<"Celular: "<<celular;
          cout<<"\n"<<endl;
	}

    //editar datos

    void SetNombres(string Nombre){nombres = Nombre;}
    void SetApellido(string Apellido){apellidos = Apellido;}
    void SetDireccion(string Direccion){direccion = Direccion;}
    void SetCelular(string Celular){celular = Celular;}
    void SetNit(string Nit){nit = Nit;}


    //Mostrar datos
    string GetNombres(){return nombres;}
    string GetApellidos(){return apellidos;}
    string GetDireccion(){return direccion;}
    string GetCelular(){return celular;}
    string GetNit(){return nit;}
>>>>>>> dc3d21ea782838c535528cea34e178743ddba79f
};