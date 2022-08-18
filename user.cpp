#include <iostream>
#include <fstream>
#include "user.h"
#include "administrador.h"

using namespace std;

string usuarios[3][2];

void cargarUsuarios()
{
    usuarios[0][0]="admin";
    usuarios[0][1]= "123";
    usuarios[1][0]= "maria";
    usuarios[1][1]=  "123";
    usuarios[2][0]= "luis";
    usuarios[2][1]= " 123";
}


bool autenticar(string usuario , string contrasena){
   for (int i = 0; i < 4; i++)
    {

        if (usuarios[i][0]== usuario &&  usuarios[i][1]==contrasena) 
        {
            return true;
        }
        
    }
    }
 
bool admin(string usuario , string contrasena){
	setlocale(LC_CTYPE, "Spanish");
    for (int i = 0; i < 4; i++)
    {
      if (usuarios[0][0]== usuario &&  usuarios[0][1]==contrasena) 
        {
            return  true;
        }
}
}

bool alumno(string usuario , string contrasena){
	setlocale(LC_CTYPE, "Spanish");
    for (int i = 0; i < 4; i++)
    {
      if (usuarios[i][0]== usuario &&  usuarios[i][1]==contrasena) 
        {
            return  true;
        }
}
}

