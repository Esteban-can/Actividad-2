#include <iostream>
#include "Cliente.cpp"
#include "Empleado.cpp"
using namespace std;
void menu();
int main(void)
{
    
    menu();
   
    scanf("");
    return(0);
}
void  menu ()
{

	string nit,nombre,apellido,direccion,fechan,pe;
	int telefono,c;
	int opcion;
	do{
  
	cout<<"Seleccione la opcion" << endl;
	cout <<"1 Crear"<<endl;
	cout <<"2 Crear Empleado"<<endl;
    cout <<"3 Leer cliente"<<endl;
    cout <<"4 Leer empleado"<<endl;
	cout <<"5 Actualizar cliente"<<endl;
	cout <<"6 Actualizar cliente"<<endl;
    cout <<"7 Eliminar"<<endl;
    
    cin >> opcion;
    switch (opcion)
  {

    case 1: cout<< "Usted a seleccionado la opcion de crear"<<endl;
 
	cout << "\nIngrese Nit: ";
	cin >> nit ;
	cout << "\nIngrese Nombres: "<<endl;
	cin >> nombre;
	cout << "Ingrese Apellidos: "<<endl;
	cin >> apellido;
	cout << "Ingrese Direccion: "<<endl;
	cin >> direccion;
	cout << "Ingrese Telefono: "<<endl;
	cin >> telefono;
	cout << "Ingrese Fecha nacimiento: "<<endl;
	cin >> fechan;
	system("pause");
    break;
 case 2: cout<<"Usted a seleccionado la opcion de Crear Empleado"<<endl;
	cout << "Ingrese Nombres: "<<endl;
	cin >> nombre;
	cout << "Ingrese Apellidos: "<<endl;
	cin >> apellido;
	cout << "Ingrese Direccion: "<<endl;
	cin >> direccion;
	cout << "Ingrese Telefono: "<<endl;
	cin >> telefono;
	cout << "Ingrese Fecha nacimiento: "<<endl;
	cin >> fechan;
	cout << "Ingrese el codigo de empleado" <<endl;
	cin >> c;
	cout << "Ingrese el puesto de empleado" <<endl;
	cin >> pe;
	system("pause");
 break;
   
   case 3: 
   cliente c = 	cliente(nombre, apellido,  direccion, telefono,  fechan,nit);
	c.mostrar();
	system("pause");
break;
	
	case 4: 
  empleado e = 	empleado(nombre, apellido,  direccion, telefono,  fechan,pe,c);
	e.mostrar();
	system("pause");
break;
	case 5: 
  cout << "Ingrese Nit: ";
	cin >> nit;
	c.setNit(nit);
	c.mostrar();
break;
     
   }
    
    
    
system("cls");
	}while(opcion!=7);
}