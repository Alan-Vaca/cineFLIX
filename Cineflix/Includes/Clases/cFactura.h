#ifndef CFACTURA_H_INCLUDED
#define CFACTURA_H_INCLUDED


#include "cCliente.h"
#include "cFuncion.h"
#include "cButacasXventas.h"
#include "cSala.h";

class factura : public cliente{

private:
    int     cantT;
    int     codFuncion;
    int     NumFactura;
    float   precio;
    fecha   fechaActual;
public:
    bool guardar();
    void cargarTicket();
    void genCod();
    void listar();
    void modificarDisco(int pos);
    int ultimaPos();
    int recaudado();
    int leedisco(int pos);
};

///Funciones visuales y de uso general:
void factura::genCod(){
    int pos=1;
    FILE *p;
	p=fopen("Dat/facturas.dat","rb");
	if(p==NULL){
        NumFactura = pos;
        fclose(p);
        return;
    }
    while(fread(this, sizeof *this,1,p)==1){
        pos++;
    }
    NumFactura = pos;
    fclose(p);
}
int  factura::recaudado(){
    float acu=0;
    FILE *p;
	p=fopen("Dat/facturas.dat","rb");
	if(p==NULL){
        fclose(p);
        return 0;
    }
    while(fread(this, sizeof *this,1,p)==1){
        acu += precio;
    }
    fclose(p);
    return acu;
}
int  factura::ultimaPos(){
    int pos=-1;
    FILE *p;
	p=fopen("Dat/facturas.dat","rb");
	if(p==NULL){
        fclose(p);
        return pos;
    }
    while(fread(this, sizeof *this,1,p)==1){
        pos++;
    }
    fclose(p);
    return pos;
}

///Funciones de carga
void factura::cargarTicket(){
    int pos;
    genCod();
    pos = ultimaPos();
    if(pos==-1){
        FILE *f;
        f = fopen("Dat/facturas.dat","wb");
        fclose(f);
        pos=0;
    }

	FILE *p;
	p=fopen("Dat/facturas.dat","rb");
	fseek(p,pos*sizeof *this,0);
	fread(this,sizeof *this,1,p);
    fclose(p);

    leerUltimaPos();
    ShowConsoleCursor(true);
    SetConsoleTextAttribute(hConsole,7);
    recuadro(14,37,22,2);
    gotoxy(18,38); cout << "CANCELAR COMPRA";
    recuadro(38,37,22,2);
    gotoxy(40,38); cout << "CONTINUAR COMPRANDO";
    gotoxy(102,16); cout << getnombre() << " " << getapellido();
    gotoxy(102,19); cout << NumFactura;

    time_t tiempo;
    char cad[80];
    struct tm *tmPtr;

    tiempo = time(NULL);
    tmPtr = localtime(&tiempo);

    int dd,mm,aa;

    dd= tmPtr->tm_mday;
    mm= tmPtr->tm_mon+1;
    aa=1900+tmPtr->tm_year;

    fechaActual.cargar(dd,mm,aa);
    gotoxy(102,22);
    fechaActual.mostrar();

    funcion fun;
    pelicula pel;
    gotoxy(102,26); cin>>codFuncion;
    bool v = false;
    while(v==false){
    int p = fun.buscar(codFuncion);
    fun.leedisco(p);
    int p2 = pel.buscar(fun.getPelicula());
    pel.leedisco(p2);

    if(edad==3 && pel.getClasificacion() >=3 && fun.buscar(codFuncion)!=-1){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(70,25); cout<<"ERES MENOR SOLO +18";
    gotoxy(102,26); cout<<"       ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(102,26); cin>>codFuncion;
    }else if(edad==4 && pel.getClasificacion() >= 2 && fun.buscar(codFuncion)!=-1){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(70,25); cout<<"ERES MENOR SOLO +13";
    gotoxy(102,26); cout<<"       ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(102,26); cin>>codFuncion;
    }else if(fun.buscar(codFuncion)==-1){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(70,25); cout<<"CODIGO INEXISTENTE!";
    gotoxy(102,26); cout<<"       ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(102,26); cin>>codFuncion;
    }else{v=true;}
    }
    gotoxy(70,25); cout<<"                   ";

    gotoxy(102,29); cin>>cantT;
    while(cantT<=0){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(70,28); cout<<"DEBE SER MIN UNO";
    gotoxy(102,29); cout<<"       ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(102,29); cin>>codFuncion;
    }
    gotoxy(70,28); cout<<"                ";

    int pos2;
    funcion f;
    pos2 = f.buscar(codFuncion);
    f.leedisco(pos2);
    precio = f.getPrecio();
    precio = precio * cantT;

    gotoxy(102,33); cout << precio;

    int opc, pos3=1;
    ShowConsoleCursor(false);
    while(true){
        switch(opc){
        case 75: //IZQUIERDA
        pos3++;
        if(pos3>2){pos3=1;}
        break;
        case 77: //DERECHA
        pos3--;
        if(pos3<1){pos3=2;}
        break;
        case 13: //ENTER
        switch(pos3){
        case 1:
        menuUsuario();
        break;
        case 2:
        modificarDisco(pos);
        funcion f;
        int pfuncion = f.buscar(codFuncion);
        f.leedisco(pfuncion);

        sala s;
        int pSala = s.buscar(f.getSala());
        s.leedisco(pSala);

        butacasxVentas bv;
        for(int x=0;x<cantT;x++){
            bv.elejir(s.getcantFila(),s.getcantColumna(),codFuncion);
        }
        system("cls");
        ShowConsoleCursor(true);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(8,4,116,37);
        recuadro(26,10,80,25);
        SetConsoleTextAttribute(hConsole, 4);
        logo(39,17);
        gotoxy(47,28); cout << "QUE LA PASES BIEN "<<nombre<<" "<<apellido<<"!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(42,25); cout << "--------------GRACIAS POR SU COMPRA--------------";
        system("pause>NULL");
        menuUsuario();
        break;
        }
        }
        switch(pos3){
        case 1:
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(72,37,22,2);
        gotoxy(76,38); cout << "CANCELAR COMPRA";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(96,37,22,2);
        gotoxy(100,38); cout << "ELEJIR  BUTACAS";;
        break;
        case 2:
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(72,37,22,2);
        gotoxy(76,38); cout << "CANCELAR COMPRA";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(96,37,22,2);
        gotoxy(100,38); cout << "ELEJIR  BUTACAS";
        break;
        }
        opc = getch();
}
}
bool factura::guardar(){
    bool grabo;
    FILE *p=fopen("Dat/facturas.dat","ab");
    if(p==NULL){
        fclose(p);
        return false;
    }
    grabo=fwrite(this, sizeof(factura),1,p);
    fclose(p);
return grabo;
}

///Funciones de muestra
void factura::listar(){
    system("cls");
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 4);
    recuadro(8,4,116,37);  /// RECUADRO PRINCIPAL
    logo(22,6);
    for (int i=5; i < 41; i++){ /// LÍNEA VERTICAL
        gotoxy(90,i); cout << char (186);
    }
    int pos = 0,x=0;
    while(leedisco(pos++)==1 && x<14){
        gotoxy(12,13+(x*2));
        SetConsoleTextAttribute(hConsole, 6);
        cout << char(219) << char(195) <<" ";
        SetConsoleTextAttribute(hConsole, 7);
        fechaActual.mostrar();
        cout <<" "<<char(175)<<" F"<<NumFactura<<char(175)<<" "<<nombre<<" "<<apellido<<" "<<char(175)<<" $"<<precio;
        x++;
        if(x==14){
            x=0;
            system("pause>NULL");
            SetConsoleTextAttribute(hConsole, 4);
            recuadro(8,4,116,37);  /// RECUADRO PRINCIPAL
            logo(22,6);
            for (int i=5; i < 41; i++){ /// LÍNEA VERTICAL
                gotoxy(90,i); cout << char (186);
            }
        }
    }
    system("pause>NULL");
}


///Funciones - Manejo de archivos
int  factura::leedisco(int pos){
	int x;
	FILE *p;
	p=fopen("Dat/facturas.dat","rb");
	if(p==NULL){
    fclose(p);
    return 0;
    }
	fseek(p,pos*sizeof *this,0);
	x=fread(this,sizeof *this,1,p);
	fclose(p);
	return x;
}
void factura::modificarDisco(int pos){
	FILE *p;
	p=fopen("Dat/facturas.dat","rb+");
	if(p==NULL){fclose(p); exit(1);}
	fseek(p,pos*sizeof *this,0);
	fwrite(this,sizeof *this,1,p);
	fclose(p);
}


#endif // CFACTURA_H_INCLUDED
