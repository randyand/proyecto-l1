#include <iostream>
#include <fstream>
#include "user.h"
#include "solicitudes.h"
#include "ofertaAgregar.h"
#include "administrador.h"
using namespace std;

int main(int argc, char const *argv[])
{
	setlocale(LC_CTYPE, "Spanish");
    cargarUsuarios();
    
    while (true)
    {
        string usuario= "";
        string contrasena="";
        system("cls");
         cout<< "autentificacion"<<endl;
        cout<< "----------------"<<endl;
        cout<< "ingrese su usuario:";
        cin>> usuario;

        cout<< "ingrese su contraseña:";
        cin>>contrasena;

        bool resultado = autenticar(usuario,contrasena);

        if (resultado== true)
        {
        	system("cls");
        	
        	cout<<"Bienvenido al sistema de gestion de Asignaturas"<<endl;
        	int cargo;
        	string Nusuario= " ";
        	string usuario1 = "admin";
        	string usuario2= "maria";
        	string usuario3= "luis";
        	
        	cout<< "1. Eres Alumno."<<endl;
        	cout<< "2. Eres docente."<<endl;
        	cin >> cargo;
        	
				switch (cargo){
    					case 1:{
    			        menuAlumno();
        				}
    
    
						case 2:			
						{
						administrador();
						}
			}
        
        }
}
}


