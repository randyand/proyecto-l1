#include <iostream>
#include <fstream>
using namespace std;

void usuario();
void cargarUsuarios();
bool autenticar(string usuario , string contrasena);
bool admin(string usuario , string contrasena);
bool alumno(string usuario , string contrasena);
