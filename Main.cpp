<<<<<<< HEAD
#include <windows.h>
#include "Datos.cpp"
//prototipos
void DatosEmpleado();
void DatosCliente();
void menu();
void editarEmpleado();
void editarCliente();

//variables globales
string nombre,apellido,celular,direccion,dato,puesto,sueldo;
//inicializando constructores
Empleado empleado = Empleado();
Cliente cliente = Cliente();


int main(){
    
    DatosEmpleado();
    empleado = Empleado(nombre,apellido,celular,direccion,dato,sueldo,puesto);
    DatosCliente();
    cliente = Cliente(nombre,apellido,celular,direccion,dato);
    menu();
}
void menu(){
    int opcion;

    do{
        system("cls");
        cout<<"\n\n\t\t\t.:Bienvenido:.\n"<<endl;
        cout<<"1.Ver todos los datos."<<endl;
        cout<<"2.Ver Cliente."<<endl;
        cout<<"3.Ver Empleado."<<endl;
        cout<<"4.Editar Cliente."<<endl;
        cout<<"5.Editar Empleado."<<endl;
        cout<<"99. Salir"<<endl;
        cout<<"\nDigite una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: 
            system("cls"); 
            empleado.Mostrar();
            cliente.mostrar();
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 2:
            system("cls");
            cliente.mostrar();
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 3: 
            system("cls");
            empleado.Mostrar();
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 4: editarCliente();
            
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 5: editarEmpleado();
            cout<<"\n"<<endl;
            system("pause");
            break;
            case 99: exit(1); break;
            default: menu();
        }
    }while(opcion != 99);
}
void DatosEmpleado(){
    cout<<"\n\n\t\tDATOS DEL EMPLEADO.....\n"<<endl;
    cout<<"Digite sus Nombres: ";
    getline(cin,nombre);
    cout<<"Digite sus Apellidos: ";
    getline(cin,apellido);
    cout<<"Digie su Direccion: ";
    fflush(stdin);
    getline(cin,direccion);
    fflush(stdin);
    cout<<"Digie su numero de celular: ";
    cin>>celular;
    cout<<"Digite su codigo de empleado: ";
    cin>>dato;
    fflush(stdin);
    cout<<"Digite su Puesto: ";
    getline(cin,puesto);
    cout<<"Digite su Sueldo: Q";
    cin>>sueldo;
}

void DatosCliente(){
    fflush(stdin);
    system("cls");
    cout<<"\n\n\t\tDATOS DEL Cliente.....\n"<<endl;
    cout<<"Digite sus Nombres: ";
    getline(cin,nombre);
    cout<<"Digite sus Apellidos: ";
    getline(cin,apellido);
    cout<<"Digie su Direccion: ";
    fflush(stdin);
    getline(cin,direccion);
    fflush(stdin);
    cout<<"Digie su numero de celular: ";
    cin>>celular;
    cout<<"Digite su Nit: ";
    cin>>dato;
}

void editarEmpleado(){
    int opcion;

    do{
        fflush(stdin);
        system("cls");
        cout<<"=================Editar Empleado==========\n\n"<<endl;
        cout<<"1. Editar Nombres. "<<endl;
        cout<<"2. Editar Apellidos. "<<endl;
        cout<<"3. Editar Direccion. "<<endl;
        cout<<"4. Editar Celular. "<<endl;
        cout<<"5. Editar Codigo de Empleado. "<<endl;
        cout<<"6. Editar Puesto. "<<endl;
        cout<<"7. Editar Sueldo. "<<endl;
        cout<<"99 <--- Regresar."<<endl;
        cout<<"\n\tDigite una opcion: ";
        cin>>opcion;

        switch(opcion){
            
            case 1: fflush(stdin); 
            cout<<"Digite los Nuevos nombres: "; getline(cin,apellido); 
            empleado.SetNombres(nombre); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado();
            break;
            
            case 2:fflush(stdin);
            cout<<"Digite los Nuevos apellidos: "; getline(cin,apellido); 
            empleado.SetApellido(apellido); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); 
            break;
            
            case 3: fflush(stdin); cout<<"Digite la Nueva Direccion: "; getline(cin,direccion); 
            empleado.SetDireccion(direccion); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break;
            
            case 4:fflush(stdin); cout<<"Digite el Nuevo celular: "; cin>>celular; 
            empleado.SetCelular(celular); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado();break;
            
            case 5:fflush(stdin); cout<<"Digite el  Nuevo Codigo de empleado: "; cin>>dato; 
            empleado.SetCodigoEmpleado(dato); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break;

            case 6: fflush(stdin); cout<<"Digite el nuevo Puesto: "; getline(cin,puesto);
            empleado.SetPuesto(puesto); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break; 
            
            case 7: fflush(stdin); cout<<"Digite el nuevo sueldo "; cin>>sueldo;
            empleado.SetSueldo(sueldo); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break; 
            case 99: menu(); break;
            
            default: editarEmpleado();
        }
    }while(opcion !=99);

}


void editarCliente(){
    int opcion;

    do{
        fflush(stdin);
        system("cls");
        cout<<"=================Editar Cliente==========\n\n"<<endl;
        cout<<"1. Editar Nombres. "<<endl;
        cout<<"2. Editar Apellidos. "<<endl;
        cout<<"3. Editar Direccion. "<<endl;
        cout<<"4. Editar Celular. "<<endl;
        cout<<"5. Editar Codigo de Empleado. "<<endl;
        cout<<"99 <--- Regresar."<<endl;
        cout<<"\n\tDigite una opcion: ";
        cin>>opcion;

        switch(opcion){
            
            case 1: fflush(stdin);
            cout<<"Digite los Nuevos nombres: "; getline(cin,nombre); 
            cliente.SetNombres(nombre); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente();
            break;
            
            case 2:fflush(stdin);
            cout<<"Digite los Nuevos apellidos: "; getline(cin,apellido); 
            cliente.SetApellido(apellido); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente(); 
            break;
            
            case 3:fflush(stdin); cout<<"Digite la Nueva Direccion: "; getline(cin,direccion); 
            cliente.SetDireccion(direccion); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente(); break;
            
            case 4:fflush(stdin); cout<<"Digite el Nuevo celular: "; cin>>celular; 
            cliente.SetCelular(celular); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente();break;
            
            case 5:fflush(stdin); cout<<"Digite el  Nuevo Nit: "; cin>>dato; 
            cliente.SetNit(dato); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break;
            
            case 99: menu(); break;
            
            default: editarCliente();
        }
    }while(opcion !=99);

=======
#include <windows.h>
#include "Datos.cpp"
//prototipos
void DatosEmpleado();
void DatosCliente();
void menu();
void editarEmpleado();
void editarCliente();

//variables globales
string nombre,apellido,celular,direccion,dato;
//inicializando constructores
Empleado empleado = Empleado();
Cliente cliente = Cliente();


int main(){
    
    DatosEmpleado();
    empleado = Empleado(nombre,apellido,celular,direccion,dato);
    DatosCliente();
    cliente = Cliente(nombre,apellido,celular,direccion,dato);
    menu();
}
void menu(){
    int opcion;

    do{
        system("cls");
        cout<<"\n\n\t\t\t.:Bienvenido:.\n"<<endl;
        cout<<"1.Ver todos los datos."<<endl;
        cout<<"2.Ver Cliente."<<endl;
        cout<<"3.Ver Empleado."<<endl;
        cout<<"4.Editar Cliente."<<endl;
        cout<<"5.Editar Empleado."<<endl;
        cout<<"99. Salir"<<endl;
        cout<<"\nDigite una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: 
            system("cls"); 
            empleado.Mostrar();
            cliente.mostrar();
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 2:
            system("cls");
            cliente.mostrar();
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 3: 
            system("cls");
            empleado.Mostrar();
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 4: editarCliente();
            
            cout<<"\n"<<endl;
            system("pause");
            break;

            case 5: editarEmpleado();
            cout<<"\n"<<endl;
            system("pause");
            break;
            case 99: exit(1); break;
            default: menu();
        }
    }while(opcion != 99);
}
void DatosEmpleado(){
    cout<<"\n\n\t\tDATOS DEL EMPLEADO.....\n"<<endl;
    cout<<"Digite sus Nombres: ";
    getline(cin,nombre);
    cout<<"Digite sus Apellidos: ";
    getline(cin,apellido);
    cout<<"Digie su Direccion: ";
    fflush(stdin);
    getline(cin,direccion);
    fflush(stdin);
    cout<<"Digie su numero de celular: ";
    cin>>celular;
    cout<<"Digite su codigo de empleado: ";
    cin>>dato;
}

void DatosCliente(){
    fflush(stdin);
    system("cls");
    cout<<"\n\n\t\tDATOS DEL Cliente.....\n"<<endl;
    cout<<"Digite sus Nombres: ";
    getline(cin,nombre);
    cout<<"Digite sus Apellidos: ";
    getline(cin,apellido);
    cout<<"Digie su Direccion: ";
    fflush(stdin);
    getline(cin,direccion);
    fflush(stdin);
    cout<<"Digie su numero de celular: ";
    cin>>celular;
    cout<<"Digite su Nit: ";
    cin>>dato;
}

void editarEmpleado(){
    int opcion;

    do{
        fflush(stdin);
        system("cls");
        cout<<"=================Editar Empleado==========\n\n"<<endl;
        cout<<"1. Editar Nombres. "<<endl;
        cout<<"2. Editar Apellidos. "<<endl;
        cout<<"3. Editar Direccion. "<<endl;
        cout<<"4. Editar Celular. "<<endl;
        cout<<"5. Editar Codigo de Empleado. "<<endl;
        cout<<"99 <--- Regresar."<<endl;
        cout<<"\n\tDigite una opcion: ";
        cin>>opcion;

        switch(opcion){
            
            case 1: fflush(stdin); 
            cout<<"Digite los Nuevos nombres: "; getline(cin,apellido); 
            empleado.SetNombres(nombre); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado();
            break;
            
            case 2:fflush(stdin);
            cout<<"Digite los Nuevos apellidos: "; getline(cin,apellido); 
            empleado.SetApellido(apellido); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); 
            break;
            
            case 3: fflush(stdin); cout<<"Digite la Nueva Direccion: "; getline(cin,direccion); 
            empleado.SetDireccion(direccion); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break;
            
            case 4:fflush(stdin); cout<<"Digite el Nuevo celular: "; cin>>celular; 
            empleado.SetCelular(celular); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado();break;
            
            case 5:fflush(stdin); cout<<"Digite el  Nuevo Codigo de empleado: "; cin>>dato; 
            empleado.SetCodigoEmpleado(dato); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break;
            
            case 99: menu(); break;
            
            default: editarEmpleado();
        }
    }while(opcion !=99);

}


void editarCliente(){
    int opcion;

    do{
        fflush(stdin);
        system("cls");
        cout<<"=================Editar Cliente==========\n\n"<<endl;
        cout<<"1. Editar Nombres. "<<endl;
        cout<<"2. Editar Apellidos. "<<endl;
        cout<<"3. Editar Direccion. "<<endl;
        cout<<"4. Editar Celular. "<<endl;
        cout<<"5. Editar Codigo de Empleado. "<<endl;
        cout<<"99 <--- Regresar."<<endl;
        cout<<"\n\tDigite una opcion: ";
        cin>>opcion;

        switch(opcion){
            
            case 1: fflush(stdin);
            cout<<"Digite los Nuevos nombres: "; getline(cin,nombre); 
            cliente.SetNombres(nombre); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente();
            break;
            
            case 2:fflush(stdin);
            cout<<"Digite los Nuevos apellidos: "; getline(cin,apellido); 
            cliente.SetApellido(apellido); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente(); 
            break;
            
            case 3:fflush(stdin); cout<<"Digite la Nueva Direccion: "; getline(cin,direccion); 
            cliente.SetDireccion(direccion); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente(); break;
            
            case 4:fflush(stdin); cout<<"Digite el Nuevo celular: "; cin>>celular; 
            cliente.SetCelular(celular); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarCliente();break;
            
            case 5:fflush(stdin); cout<<"Digite el  Nuevo Nit: "; cin>>dato; 
            cliente.SetNit(dato); cout<<"\n\n\tDATOS GUARDADOS..\n"<<endl;
            editarEmpleado(); break;
            
            case 99: menu(); break;
            
            default: editarCliente();
        }
    }while(opcion !=99);

>>>>>>> dc3d21ea782838c535528cea34e178743ddba79f
}