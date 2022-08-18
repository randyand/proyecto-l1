#include <iostream>
#include <fstream>
#include "user.h"
#include "solicitudes.h"
#include "administrador.h"
using namespace std;




void ofertaAgregar(){
	int materias= 0;
	cout<<"Cuantas asignaturas desea ofertar: ";
    cin>> materias;
		
    string asignaturas[5][2];
    string horarios;

    for (int i = 0; i < materias; i++)
		{
		system("cls");
		cout<< "Ingreso de asignaturas que se ofertaran"<<endl;
		cout<< "---------------------------------------"<<endl;
			
		cout<< "ingrese la asignatura:";
        cin>> asignaturas[i][0];
		cout<< "ingrese la hora:";
        cin>>asignaturas[i][1];
			}
    
	
		for (int i = 0; i < materias; i++)
			{
     		ofstream Myfile("asignaturas.txt");
     		for (int i = 0; i < materias; i++)
    		{
			Myfile<< asignaturas[i][0] + "  "+ asignaturas[i][1]<<endl;
    		}
    		Myfile.close();
    	}

}


void ofertaver(){
	system("cls");
			cout<< "Oferta Academica."<<endl;
			cout<< "---------------------------------------"<<endl;
			
			string myText;
    			ifstream MyReadFile("asignaturas.txt");
    
    			while(getline(MyReadFile, myText))
    																										{
    				cout<< myText;																							}
				MyReadFile.close();
}

void seleccionAlumno(){
	int materias= 0;
	
	system("cls");
			cout<< "Ingrese las asignaturas que llevara."<<endl;
			cout<< "---------------------------------------"<<endl;
	
			cout<<"Cuantas asignaturas desea cursar el siguiente periodo: ";
    		cin>> materias;
							
  			string asignaturalumno[5][2];
    						string horarios;

    		for (int i = 0; i < materias; i++)
				{
		 			cout<< "ingrese la asignatura:";
      				cin>> asignaturalumno[i][0];
					cout<< "ingrese la hora:";
        			cin>>asignaturalumno[i][1];
				}
    
 			for (int i = 0; i < materias; i++)
			{
   				ofstream Myfile("asignaturasalumno.txt");
     			for (int i = 0; i < materias; i++)
  					{
					Myfile<< asignaturalumno[i][0] + "  "+ asignaturalumno[i][1];;
    				}
  						Myfile.close();
  					}
    			
}


void asignaturaAlumno(){
			cout<< "asignaturas elegidas."<<endl;
			cout<< "---------------------------------------"<<endl;
			
			string myText;
    			ifstream MyReadFile("asignaturasalumno.txt");
    
    			while(getline(MyReadFile, myText))
    																										{
    				cout<< myText;
																											}
				MyReadFile.close();
}

