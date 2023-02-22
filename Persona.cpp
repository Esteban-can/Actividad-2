#include <iostream>
using namespace std;
class persona
{
	protected :
		string nombres, apellidos,direccion,fecha_nacimiento;
		int telefono;
		
		
		protected:
			persona()
			{
			}
				persona( string nom,string ape, string dire,int tel, string fn )
				{
					nombres = nom;
					apellidos = ape;
					direccion = dire;
					telefono = tel;
					fecha_nacimiento = fn;
					
				}
				void mostrar();
			
	
};