#include <iostream>
# include "Persona.cpp"
using namespace std;
class cliente : persona
{
	private :
		string nit;
		public :
			cliente()
			{
			}
				cliente(string nom,string ape, string dire,int tel, string fn, string n) : persona (nom,ape,dire,tel,fn)
				{
					nit = n;
				}
				
				void setNit(string n){nit = n;}
				void setNombres (string nom){nombres = nom;}
				void setDireccion (string dire){direccion = dire;}
				void setTelefono (int tel){telefono = tel;}
				void setApellidos (string ape){apellidos = ape;}
				void setFechaN (string fn){fecha_nacimiento = fn;}
				
				//get (mostrar)
				string getNit(){return nit;}
				string getNombres(){return nombres;}
				string getApellidos(){return apellidos;}
				string getDireccion(){return direccion;}
				int getTelefono(){return telefono;}
				string getFechaN(){return fecha_nacimiento;}
				
				void mostrar()
				{
					cout<< nit<<endl;
					cout<< nombres<<endl;
					cout<< apellidos<<endl;
					cout<< direccion<<endl;
					cout<< telefono<<endl;
					cout<< fecha_nacimiento<<endl;
					
				
				}
				
				

};		

