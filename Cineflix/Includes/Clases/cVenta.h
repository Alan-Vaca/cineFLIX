#ifndef CVENTA_H_INCLUDED
#define CVENTA_H_INCLUDED

void cierre(){

cliente c;
factura f;

float recaudado;
int cantidad;

recaudado = f.recaudado();
cantidad  = c.cantidad();

system("cls");
ShowConsoleCursor(false);
SetConsoleTextAttribute(hConsole, 4);
recuadro(8,4,116,37);
SetConsoleTextAttribute(hConsole, 6);
recuadro(26,10,80,25);
SetConsoleTextAttribute(hConsole, 7);
gotoxy(36,19); cout << "CANTIDAD DE CLIENTES";
recuadro(36,20,60,2);
gotoxy(36,24); cout << "TOTAL RECAUDADO";
recuadro(36,25,60,2);
gotoxy(40,21); cout << cantidad;
gotoxy(40,26); cout << "$" << recaudado;
SetConsoleTextAttribute(hConsole, 4);
logo(39,7);
gotoxy(36,17); cout << "CIERRE DE CAJA";

system("pause>NULL");
remove("Dat/facturas.dat");
remove("Dat/clientes.dat");
remove("Dat/butacas.dat");
}

#endif // CVENTA_H_INCLUDED
