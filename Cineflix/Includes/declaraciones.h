#ifndef DECLARACIONES_H_INCLUDED
#define DECLARACIONES_H_INCLUDED

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

///visuales
void ShowConsoleCursor(bool);
void logoChico();
void logo();

void gamaColores();
void recuadro();

int clasificacion();
int genero();
void codVerificador();

void numeros(int _num, int _x, int _y);


///menues
void MenuPrincipal();
void passVerificador();
void menuAdmin();
void adminSalas();
void cargarSala();
void modificarSala();
void listarSala();
void adminPeliculas();
void adminFunciones();
void adminVentas();
void menuUsuario();
void passConf();
void filtrarGenero();
void filtrarZona();

///contrase�a
struct password{
int     cc;
};

void Pverificador();


#endif // DECLARACIONES_H_INCLUDED
