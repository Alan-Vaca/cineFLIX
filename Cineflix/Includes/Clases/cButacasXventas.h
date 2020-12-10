#ifndef CBUTACASXVENTAS_H_INCLUDED
#define CBUTACASXVENTAS_H_INCLUDED

class butacasxVentas{
private:
    int     codFuncion;
    int     fila;       ///QUE FILA ELIJIO UNA SOLA PERSONA
    int     columna;    ///QUE COLUMNA ELIJIO UNA SOLA PERSONA
public:
    void elejir(int Cfil, int Ccolum, int codf);
    void cargar(int cf,int f,int c){
    fila = f;
    columna = c;
    codFuncion = cf;
    guardar();
    }

    bool guardar();
    int  buscar(int f,int c);
    int  leedisco(int pos);
};

///Funciones de carga:
bool butacasxVentas::guardar(){
    bool grabo;
    FILE *p=fopen("Dat/butacas.dat","ab");
    if(p==NULL){
        return false;
    }
    grabo=fwrite(this, sizeof(butacasxVentas),1,p);
    fclose(p);
return grabo;
}
int  butacasxVentas::leedisco(int pos){
	int x;
	FILE *p;
	p=fopen("Dat/butacas.dat","rb");
	if(p==NULL){
    return 0;
    }
	fseek(p,pos*sizeof *this,0);
	x=fread(this,sizeof *this,1,p);
	fclose(p);
	return x;
}

///Funciones extras:
void butacasxVentas::elejir(int Cfil, int Ccolum, int codf){
system("cls");
SetConsoleTextAttribute(hConsole, 4);
recuadro(8,4,116,37);  /// RECUADRO PRINCIPAL
int posGot=0;
int posGot2=0;
int i,j;

///Creando la matriz:
int **Butacas = new int* [Cfil];
for (i = 0; i < Cfil; i++){
    Butacas[i] = new int [Ccolum];
}

///Ponemos la matriz en cero:
for (i = 0; i < Cfil; i++){
    for ( j = 0; j < Ccolum; j++){
        Butacas[i][j] = 0;
    }
}

int pos2=0;
    while(leedisco(pos2++)==1){
    if(codFuncion == codf){
        Butacas[fila-1][columna-1] = 1;
    }
}


///Pintado de las butacas:
SetConsoleTextAttribute(hConsole, 7);
for(int x=1;x<=Ccolum;x++){
    gotoxy(15+posGot,9);
    cout << "C" << x;
    posGot=posGot+4;
}

for(int x=1;x<=Cfil;x++){
    gotoxy(11,11+posGot2);
    cout << "F" << x;
    posGot2=posGot2+2;
}

posGot=0;
posGot2=0;

///Pintado de la disposicion de las butacas
for(int x=0;x<Cfil;x++){
    for(int y=0;y<Ccolum;y++){
        if(Butacas[x][y]==0){
            SetConsoleTextAttribute(hConsole, 2);
        }
        else{
            SetConsoleTextAttribute(hConsole, 4);
        }
        gotoxy(15+posGot,11+posGot2);
        cout << char(204) << char(220) << char(185);
        posGot=posGot+4;
    }
    posGot=0;
    posGot2=posGot2+2;
}

SetConsoleTextAttribute(hConsole, 6);
gotoxy(6+(Ccolum*2),7); cout << "[P.A.N.T.A.L.L.A]";

SetConsoleTextAttribute(hConsole, 7);
recuadro(97,6,24,33);
SetConsoleTextAttribute(hConsole, 4);
logoChico(101,11);
gotoxy(101,35); cout << char(204) << char(220) << char(185);
SetConsoleTextAttribute(hConsole, 2);
gotoxy(101,33); cout << char(204) << char(220) << char(185);

ShowConsoleCursor(true);
SetConsoleTextAttribute(hConsole, 6);
gotoxy(101,21); cout << "INGRESE EL NUMERO";
gotoxy(105,22); cout << "DE BUTACA";

int contadorButacas=0;
for(int x=0;x<Cfil;x++){
    for(int y=0;y<Ccolum;y++){
        if(Butacas[x][y]==0){
            contadorButacas++;
        }
    }
}
gotoxy(101,29); cout << "QUEDAN " << contadorButacas << " BUTACAS";
gotoxy(103,30); cout << "AUN DISPONIBLES";

SetConsoleTextAttribute(hConsole, 7);
gotoxy(101,25); cout << "FILA: ";
gotoxy(101,26); cout << "COLUMNA: ";

gotoxy(106,33); cout << "DISPONIBLE";
gotoxy(106,35); cout << "OCUPADA";

int f, c;
gotoxy(111,25); cin  >> f;
gotoxy(111,26); cin  >> c;
while(Butacas[f-1][c-1]==1){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(101,27); cout << "UPS! ESTA OCUPADA";
    gotoxy(111,25); cout << "        ";
    gotoxy(111,26); cout << "        ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(111,25); cin  >> f;
    gotoxy(111,26); cin  >> c;
}
ShowConsoleCursor(false);
gotoxy(101,27); cout << "                 ";
SetConsoleTextAttribute(hConsole, 2);
gotoxy(101,27); cout << "SE ENCUENTRA VACIA";
system("pause>NULL");
cargar(codf,f,c);
}

#endif // CBUTACASXVENTAS_H_INCLUDED
