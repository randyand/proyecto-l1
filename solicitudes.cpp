#include <iostream>
#include <fstream>
#include "user.h"
#include "solicitudes.h"
#include "administrador.h"
using namespace std;
   

	void materias()
	{
		system("cls");
			cout<< "Solicitud de asignaturas."<<endl;
			cout<< "---------------------------------------"<<endl;
	
		int materias=0;
		cout<<"Cuantas asignaturas desea solicitar el siguiente periodo: ";
    	cin>> materias;    					
    	string horarios;
		string solicitudalumno[5][2];
    	for (int i = 0; i < materias; i++)
			{
				cout<< "ingrese la asignatura:";
        		cin>> solicitudalumno[i][0];
				cout<< "ingrese la hora:";
				cin>>solicitudalumno[i][1];
							
				string solicitudalumno[5][2];
    			string horarios;

    			for (int i = 0; i < materias; i++)
					{
				 	cout<< "ingrese la asignatura:";
        			cin>> solicitudalumno[i][0];
					cout<< "ingrese la hora:";
					cin>>solicitudalumno[i][1];
				}
		}
	}
	
	
	void clasesSeleccionadas(){
		
		system("cls");
			cout<< "Clases seleccionadas en este no se muestran las clases solicitadas."<<endl;
			cout<< "---------------------------------------"<<endl;
	
		string myText;
		ifstream MyReadFile("asignaturasalumno.txt");
    
		while(getline(MyReadFile, myText))
    	{
		cout<< myText;
		}
		MyReadFile.close();

	}
	
	void clasesSolicitadas(){
		system("cls");
			cout<< "Clases solicitadas estan deberan ser aprobadas para su apertura."<<endl;
			cout<< "---------------------------------------"<<endl;
	
		string myText;
    			ifstream MyReadFile("solicitudesalumno.txt");
    
    			while(getline(MyReadFile, myText))
    			{
    				cout<< myText;
				}
				MyReadFile.close();
    			
	}


	
