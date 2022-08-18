#include <iostream>
#include <fstream>
#include "user.h"
#include "solicitudes.h"
#include "ofertaAgregar.h"
#include "administrador.h"
using namespace std;


void administrador()
{	
				int opcion = 0;
				cout<< "Bienvenido administrador"<< endl;
				cout<< "************************"<< endl;
		
				cout<<"1. Agregar oferta academica:"<< endl;
				cout<< "2. Ver seleccion de materia seleccionadas por los alumnos:"<<endl;
				cout<< "3. Ver solicitudes de alumnos:"<<endl;
    			cout<<"Ingrese una opcion: ";
    			cin>> opcion;

				char continuar = 'Y';
    			while(continuar == 'Y' || continuar == 'y')
				{
					system("cls");
					switch (opcion)
					{
    					case 1:{
    						ofertaAgregar();
						}	
						case 2:{
						asignaturaAlumno();
}
								
        																									
        				case 3:	{
        				clasesSolicitadas();
		
        				}
        				cout<< "desea continuar en el sistema:";
		cin>> continuar;
        				
        		}
				}
}


void menuAlumno()
{	
		int opcion = 0;
		cout<< "Bienvenido estimado estudiante."<< endl;
		cout<< "************************"<< endl;
		
		cout<<"1.seleccionar horario de oferta academica:"<< endl;
		cout<< "2. Solicitar una nueva asignatura:"<<endl;
		cout<< "3. ver mis clases seleccionadas"<<endl;
    	cout<<"Ingrese una opcion: ";
    	cin>> opcion;
    	
				char continuar = 'Y';
    			while(continuar == 'Y' || continuar == 'y')
				{
					system("cls");
					switch (opcion)
					{
    					case 1:{
    						seleccionAlumno();
    					
						}	
						case 2:{
						seleccionAlumno();
						}
        																									
        				case 3:	{
        				ofertaver();
        					}
        				
        			cout<< "desea continuar en el sistema:";
					cin>> continuar;
        				
        		}
				}
}

