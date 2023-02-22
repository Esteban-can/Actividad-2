#include <iostream>
# include "Persona.cpp"
using namespace std;
class empleado : persona
{
	private :
		string puesto_empleado;
		int codigo;
		public :
			empleado()
			{
			}
				empleado(string nom,string ape, string dire,int tel, string fn, string pe, int c) : persona (nom,ape,dire,tel,fn)
				{
					codigo= c;
					puesto_empleado = pe;
				}
				void setNombres (string nom){nombres = nom;}
				void setDireccion (string dire){direccion = dire;}
				void setTelefono (int tel){telefono = tel;}
				void setApellidos (string ape){apellidos = ape;}
				void setFechaN (string fn){fecha_nacimiento = fn;}
				void setPe(string pe){puesto_empleado = pe;}
				void setC(int c){codigo = c;}
				
				//get (mostrar)
		
				string getNombres(){return nombres;}
				string getApellidos(){return apellidos;}
				string getDireccion(){return direccion;}
				int getTelefono(){return telefono;}
				string getFechaN(){return fecha_nacimiento;}
			    string getPe(){return puesto_empleado;}
				int getC(){return codigo;}
				
				void mostrar()
				{
					cout<< puesto_empleado<<endl;
						cout<< codigo<<endl;
					cout<< nombres<<endl;
					cout<< apellidos<<endl;
					cout<< direccion<<endl;
					cout<< telefono<<endl;
					cout<< fecha_nacimiento<<endl;
					
				
				}
				
				

};		

