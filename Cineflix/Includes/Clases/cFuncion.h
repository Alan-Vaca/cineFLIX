#ifndef CFUNCION_H_INCLUDED
#define CFUNCION_H_INCLUDED

#include "cCalendario.h"
#include "cPelicula.h"
#include "cSala.h"

class funcion{
private:
    int         codsala; ///debe existir en sala
    int         cpelicula; ///debe existir en pelicula
    int         codFuncion; ///genera un cod unico
    hora        horario;    ///horario por una sola funcion
    fecha       fechaDisponibles;   ///fecha de esa funcion
    float       precio;     ///precio para era funcion
public:
    bool guardar();
    void cargar(bool _modificacion);
    void leePos(int opc, char* _zona,int _gen);
    void genCod();
    void modificarDisco(int pos);
    int  ultimaPos();
    int  recaudado();
    int  leedisco(int pos);
    void modificar();
    int  buscar(int _num);
    void xlocalidad(int _cs);
    void xfecha();
    int  NumSala();
    char *TituloPelicula(){
    pelicula p;
    int pos = p.buscar(cpelicula);
    p.leedisco(pos);
    return p.getTitulo();
    }
    int fechasv(int dd, int mm, int aa);
    float getPrecio(){return precio;}
    int   getSala(){return codsala;}
    int   getPelicula(){return cpelicula;}
    char* zona();
    int   genero();
};

///Funciones visuales y de uso general:
int  funcion::NumSala(){
sala s;
int pos = s.buscar(codsala);
s.leedisco(pos);
return s.getnum();
}
char*funcion::zona(){
sala s;
int pos = s.buscar(codsala);
s.leedisco(pos);
return s.getlocalidad();
}
int  funcion::genero(){
pelicula p;
int pos = p.buscar(cpelicula);
p.leedisco(pos);
return p.getGenero();
}
void funcion::genCod(){
    int pos=1;
    FILE *p;
	p=fopen("Dat/funciones.dat","rb");
	if(p==NULL){
        codFuncion = pos;
        fclose(p);
        return;
    }
    while(fread(this, sizeof *this,1,p)==1){
        pos++;
    }
    codFuncion = pos;
    fclose(p);
}
int  funcion::ultimaPos(){
    int pos=-1;
    FILE *p;
	p=fopen("Dat/funciones.dat","rb");
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
int  funcion::buscar(int _num){
	int pos=0;
	while(leedisco(pos++)==1){
    if(_num == codFuncion){
        return pos;
    }
    }
	return -1;
}
int  funcion::fechasv(int dd, int mm, int aa){
    int fechaUsuario, fechaActual, diferencia, opcion;
    bool Existe;
    Existe = false;                                                             ///PARA SABER SI LA FECHA EXISTE
    fechaUsuario = (aa*10000) + (mm * 100) + dd;                                ///CALCULO DE LA FECHA EN SUMA

        switch(mm){                                                             ///COMPRUEBA QUE SEA UNA FECHA VALIDA
        case 1:                                                                 ///ENERO
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        case 2:                                                                 ///FEBRERO
            if(aa%4==0 || aa%100==0 || aa%400==0){                              ///EN CASO DE UN AÑO BICIESTO
                if(dd>0 && dd<=29 && aa>=0){Existe = true;}
            }else{if(dd>0 && dd<=28 && aa>=0){Existe = true;}}
        break;
        case 3:                                                                 ///MARZO
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        case 4:                                                                 ///ABRIL
            if(dd>0 && dd<=30 && aa>=0){Existe = true;}
        break;
        case 5:                                                                 ///MAYO
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        case 6:                                                                 ///JUNIO
            if(dd>0 && dd<=30 && aa>=0){Existe = true;}
        break;
        case 7:                                                                 ///JULIO
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        case 8:                                                                 ///AGOSTO
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        case 9:                                                                 ///SEPTIEMBRE
            if(dd>0 && dd<=30 && aa>=0){Existe = true;}
        break;
        case 10:                                                                ///OCTUBRE
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        case 11:                                                                ///NOVIEMBRE
            if(dd>0 && dd<=30 && aa>=0){Existe = true;}
        break;
        case 12:                                                                ///DICIEMBRE
            if(dd>0 && dd<=31 && aa>=0){Existe = true;}
        break;
        }

        time_t tiempo;                                                           ///SACARA LA FECHA ACTUAL
        struct tm * tmPtr;
        tiempo = time(NULL);
        tmPtr  = localtime(&tiempo);
        fechaActual = tmPtr->tm_mday + ((tmPtr->tm_mon+1) * 100) + ((1900+tmPtr->tm_year) * 10000);
        diferencia = fechaActual - fechaUsuario;

        if(diferencia<=0 && Existe == true){opcion=1;} ///Es un fecha futura
        else if(Existe==true){
            if(diferencia>=180000){opcion = 2;} ///Es Mayor a 18 años
            else if(diferencia>=130000){opcion = 3;} ///Es mayor a 13 años
            else{opcion = 4;} ///Es menor
        }else{opcion = 5;} ///La fecha no existe
    return opcion;
}

///Funciones de carga
void funcion::modificar(){
	int _cod,pos2;
    system("cls");
    ShowConsoleCursor(true);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(8,4,116,37);
    recuadro(26,10,80,25);
    SetConsoleTextAttribute(hConsole, 4);
    logo(39,7);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(36,30,60,4);
    recuadro(38,31,26,2);
    gotoxy(47,32); cout << "CANCELAR";
    recuadro(67,31,26,2);
    gotoxy(75,32); cout << "VERIFICAR";
    gotoxy(36,18); cout << "INGRESE EL 'CODIGO DE LA FUNCION'";
    recuadro(36,20,60,2);
    gotoxy(38,21); cin >> _cod;
    int opc, pos=1;
    ShowConsoleCursor(false);
    while(true){
        switch(opc){
        case 75: //IZQUIERDA
        pos++;
        if(pos>2){pos=1;}
        break;
        case 77: //DERECHA
        pos--;
        if(pos<1){pos=2;}
        break;
        case 13: //ENTER
        switch(pos){
        case 1:
        adminSalas();
        break;
        case 2:
        pos2=buscar(_cod);
        if(pos2!=-1){
        SetConsoleTextAttribute(hConsole,2);
        gotoxy(36,19); cout << "CODIGO CORRECTO";
        system("pause>NULL");
        cargar(true);
        modificarDisco(pos2-1);
        adminFunciones();
        }else{
        SetConsoleTextAttribute(hConsole, 4);
        gotoxy(36,19); cout << "CODIGO ERRONEO";
        system("pause>NULL");
        adminFunciones();
        }
        break;
        }
        }
        switch(pos){
        case 1:
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(38,31,26,2);
        gotoxy(47,32); cout << "CANCELAR";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(67,31,26,2);
        gotoxy(75,32); cout << "VERIFICAR";
        break;
        case 2:
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(38,31,26,2);
        gotoxy(47,32); cout << "CANCELAR";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(67,31,26,2);
        gotoxy(75,32); cout << "VERIFICAR";
        break;
        }
        opc = getch();
}
}
void funcion::cargar(bool _modificacion){
    if(_modificacion==false){genCod();}
    ShowConsoleCursor(true);
    SetConsoleTextAttribute(hConsole, 4);
    recuadro(8,4,116,37);  /// RECUADRO PRINCIPAL
    logo(65,6);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(10,6,50,33);  /// PORTADA

    recuadro(90,13,29,2);
    gotoxy(65,14); cout << "CODIGO DE FUNCION: ";
    recuadro(90,16,29,2);
    gotoxy(65,17); cout << "CODIGO DE PELICULA: ";
    recuadro(90,19,29,2);
    gotoxy(65,20); cout << "CODIGO DE SALA: ";
    recuadro(90,22,29,2);
    gotoxy(65,23); cout << "FECHA DE FUNCION: ";
    gotoxy(102,23); cout << "/";
    gotoxy(105,23); cout << "/";
    recuadro(90,25,29,2);
    gotoxy(65,26); cout << "HORARIO: ";
    gotoxy(104,26); cout << ":";
    recuadro(90,28,29,2);
    gotoxy(65,29); cout << "PRECIO: ";
    gotoxy(100,14); cout << codFuncion;

    SetConsoleTextAttribute(hConsole, 4);
    recuadro(65,35,55,4);
    numeros(codFuncion,13,18);
    SetConsoleTextAttribute(hConsole, 7);
    if(_modificacion==false){
    gotoxy(70,37); cout << "GUARDAR FUNCION?";
    recuadro(90,36,13,2);
    gotoxy(96,37); cout << "SI";
    recuadro(105,36,13,2);
    gotoxy(111,37); cout << "NO";
    }else{
    SetConsoleTextAttribute(hConsole, 6);
    gotoxy(73,37); cout << "-COMPLETE TODOS LOS CAMPOS SOLICITADOS!-";
    SetConsoleTextAttribute(hConsole, 7);
    }
    int dd,mm,aa,h,m;

    gotoxy(100,17); cin >> cpelicula;
    pelicula p;
    while(p.buscar(cpelicula)==-1){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(65,16); cout<<"CODIGO INEXISTENTE";
    gotoxy(100,17); cout<<"       ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(100,17); cin >> cpelicula;
    }
    gotoxy(65,16); cout<<"                   ";

    gotoxy(100,20); cin >> codsala;
    sala s;
    while(s.buscar(codsala)==-1){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(65,19); cout<<"CODIGO INEXISTENTE";
    gotoxy(100,20); cout<<"       ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(100,20); cin >> codsala;
    }
    gotoxy(65,19); cout<<"                   ";

    gotoxy(100,23); cin >> dd;
    gotoxy(103,23); cin >> mm;
    gotoxy(106,23); cin >> aa;
    while(fechasv(dd,mm,aa)!=1 || fechasv(dd,mm,aa)==5){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(65,22); cout<<"FECHA ACTUAL O SUPERIOR";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(100,23); cout<<"  ";
    gotoxy(103,23); cout<<"  ";
    gotoxy(106,23); cout<<"    ";
    gotoxy(100,23); cin >> dd;
    gotoxy(103,23); cin >> mm;
    gotoxy(106,23); cin >> aa;
    }
    gotoxy(65,22); cout<<"                       ";

    fechaDisponibles.cargar(dd,mm,aa);
    gotoxy(100,26); cin >> h;
    while (h < 0 || h>24){
        SetConsoleTextAttribute(hConsole, 4);
        gotoxy(65,25); cout<<"HORARIO INEXISTENTE";
        gotoxy(100,26); cout<<"  ";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(100,26); cin >> h;
    }
    gotoxy(65,25); cout<<"                       ";
    gotoxy(106,26); cin >> m;
    while (m < 0 || m>59){
        SetConsoleTextAttribute(hConsole, 4);
        gotoxy(65,25); cout<<"HORARIO INEXISTENTE";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(106,26); cout<<"  ";
        gotoxy(106,26); cin >> m;
    }
    gotoxy(65,25); cout<<"                       ";
    horario.cargar(h,m);
    gotoxy(100,29); cin >> precio;
    while (precio <=0){
        SetConsoleTextAttribute(hConsole, 4);
        gotoxy(65,28); cout<<"NO ACEPTA NEGATIVOS";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(100,29); cout<<"    ";
        gotoxy(100,29); cin >> precio;
    }
    gotoxy(65,28); cout<<"                       ";
    ShowConsoleCursor(false);
    if(_modificacion==false){
    int opc, pos=1;
    while(true){
        switch(opc){
            case 75: //IZQUIERDA
                pos++;
                if(pos>2){pos=1;}
            break;
            case 77: //DERECHA
                pos--;
                if(pos<1){pos=2;}
            break;
            case 13: //ENTER
                switch(pos){
                    case 1:
                        guardar();
                        adminFunciones();
                    break;
                    case 2:
                        adminFunciones();
                    break;
                    }
                    }
        switch(pos){
            case 1:
                SetConsoleTextAttribute(hConsole, 6);
                recuadro(90,36,13,2);
                gotoxy(96,37); cout << "SI";
                SetConsoleTextAttribute(hConsole, 7);
                recuadro(105,36,13,2);
                gotoxy(111,37); cout << "NO";
            break;
            case 2:
                SetConsoleTextAttribute(hConsole, 7);
                recuadro(90,36,13,2);
                gotoxy(96,37); cout << "SI";;
                SetConsoleTextAttribute(hConsole, 6);
                recuadro(105,36,13,2);
                gotoxy(111,37); cout << "NO";
            break;
            }
        opc = getch();
}
}
SetConsoleTextAttribute(hConsole, 2);
gotoxy(68,37); cout << "----LOS DATOS DE LA FUNCION FUERON MODIFICADOS----";
system("pause>NULL");

}
bool funcion::guardar(){
    bool grabo;
    FILE *p=fopen("Dat/funciones.dat","ab");
    if(p==NULL){
        fclose(p);
        return false;
    }
    grabo=fwrite(this, sizeof(funcion),1,p);
    fclose(p);
return grabo;
}

///Funciones de muestra:
void funcion::leePos(int opc, char* _zona,int _gen){
    system("cls");
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 4);
    recuadro(8,4,116,37);  /// RECUADRO PRINCIPAL
    logo(22,6);
    for (int i=5; i < 41; i++){ /// LÍNEA VERTICAL
        gotoxy(90,i); cout << char (186);
    }
    int pos = -1, pos2 = 0, x = 0;
    int dd,mm,aa;
    time_t tiempo;
    struct tm *tmPtr;

    tiempo = time(NULL);
    tmPtr = localtime(&tiempo);

    dd= tmPtr->tm_mday;
    mm= tmPtr->tm_mon+1;
    aa=1900+tmPtr->tm_year;

    ///1 - Mostrara todo , 2 - Solo la fecha actual , 3 - Solo zona , 4 - Solo por genero
    while(leedisco(pos++)==1 && x<14){

        bool listar = false;
        switch(opc){
        case 1:
            listar = true;
        break;
        case 2:
            int hs,ms;
            hs = tmPtr->tm_hour;
            ms = tmPtr->tm_min;
            if(dd==fechaDisponibles.getDia()&&mm==fechaDisponibles.getMes()&&aa==fechaDisponibles.getAnio()&&hs>=horario.gethoras()&&ms>horario.getminutos()){
                listar = true;
            }
        break;
        case 3:
            if(strcmp(_zona,zona())==0){
                listar = true;
            }
        break;
        case 4:
            if(genero()==_gen){
                listar = true;
            }
        break;
        }
        if(leedisco(pos)==1&&listar==true){
        gotoxy(12,13+(x*2));
        SetConsoleTextAttribute(hConsole, 6);
        cout << char(219) << char(195) << " C" << codFuncion << " ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << char(175) << " " << TituloPelicula();
        SetConsoleTextAttribute(hConsole, 6);
        gotoxy(48,13+(x*2));
        cout << char(175) << " " << fechaDisponibles.getDia() << "/";
        cout << fechaDisponibles.getMes() << "/" << fechaDisponibles.getAnio() << " ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << char(175) << " Sala " << NumSala() << " - ";
        cout << horario.gethoras() << ":" << horario.getminutos();
        if(horario.getminutos()==0){
            cout<<"0";
        }
        cout << " " << char(175) << " $" << precio;
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
    }
    system("pause>NULL");
}

///Funciones - Manejo de archivos:
int  funcion::leedisco(int pos){
	int x;
	FILE *p;
	p=fopen("Dat/funciones.dat","rb");
	if(p==NULL){
    cout<<"No existe el archivo";
    system("pause<null");
    fclose(p);
    return 0;
    }
	fseek(p,pos*sizeof *this,0);
	x=fread(this,sizeof *this,1,p);
	fclose(p);
	return x;
}
void funcion::modificarDisco(int pos){
	FILE *p;
	p=fopen("Dat/funciones.dat","rb+");
	if(p==NULL){cout<<"Error de archivo"; fclose(p); exit(1);}
	fseek(p,pos*sizeof *this,0);
	fwrite(this,sizeof *this,1,p);
	fclose(p);
	system("pause");
}


#endif // CFUNCION_H_INCLUDED
