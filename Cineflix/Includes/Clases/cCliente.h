#ifndef CCLIENTE_H_INCLUDED
#define CCLIENTE_H_INCLUDED

class cliente{
protected:
    int         dni;
    char        nombre[20];
    char        apellido[40];
    fecha       fechaNac;
    int         edad;
public:
    void listar();
    bool cargar();
    bool guardar();
    void leePos();
    void modificar();
    void modificarDisco(int pos);
    int leedisco(int pos);
    int buscar(int _dni);
    int cantidad();
    void leerUltimaPos();
    int fechasv(int dd, int mm, int aa);

    ///gets
    int getdni(){return dni;}
    char *getnombre(){return nombre;}
    char *getapellido(){return apellido;}
};

///Funciones visuales y de uso general:
int  cliente::cantidad(){
    int acu=0;
    FILE *p;
	p=fopen("Dat/clientes.dat","rb");
	if(p==NULL){
        fclose(p);
        return 0;
    }
    while(fread(this, sizeof *this,1,p)==1){
        acu ++;
    }
    fclose(p);
    return acu;
}
int  cliente::fechasv(int dd, int mm, int aa){
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
bool cliente::cargar(){
    int DD,MM,AA;
    system("cls");
    ShowConsoleCursor(true);
    SetConsoleTextAttribute(hConsole, 4);
    recuadro(8,4,116,37);  /// RECUADRO PRINCIPAL
    logo(10,6);
    logo(68,6);
    for (int i=5; i < 41; i++){ /// LÍNEA VERTICAL
        gotoxy(66,i); cout << char (186);
    }
    gotoxy(14,13); cout << "-----COMPLETE TODOS LOS CAMPOS DEL CLIENTE-----";
    gotoxy(73,13); cout << "-----COMPLETE TODOS LOS CAMPOS FALTANTES-----";
    recuadro(12,28,50,6);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(42,15,20,2);
    gotoxy(12,16); cout << "DNI:";
    recuadro(42,18,20,2);
    gotoxy(12,19); cout << "NOMBRE:";
    recuadro(42,21,20,2);
    gotoxy(12,22); cout << "APELLIDO:";
    recuadro(42,24,20,2);
    gotoxy(12,25); cout << "FECHA DE NACIMIENTO";
    gotoxy(46,25); cout << "/";
    gotoxy(49,25); cout << "/";
    gotoxy(25,30); cout << "RECUERDA: SI ERES 'MENOR'";
    gotoxy(29,31); cout << "NO PODRAS COMPRAR";
    gotoxy(22,32); cout << "CIERTAS PELICULAS EN CARTELERA!";

    recuadro(100,15,20,2);
    gotoxy(70,16); cout << "CLIENTE:";
    recuadro(100,18,20,2);
    gotoxy(70,19); cout << "NUMERO DE FACTURA:";
    recuadro(100,21,20,2);
    gotoxy(70,22); cout << "FECHA:";
    gotoxy(104,22); cout << "/";
    gotoxy(107,22); cout << "/";
    recuadro(100,25,20,2);
    gotoxy(70,26); cout << "NUMERO DE FUNCION:";
    recuadro(100,28,20,2);
    gotoxy(70,29); cout << "CANTIDAD DE ENTRADAS:";
    recuadro(100,32,20,2);
    gotoxy(70,33); cout << "TOTAL:";

    recuadro(12,36,50,4);
    recuadro(14,37,22,2);
    gotoxy(18,38); cout << "CANCELAR COMPRA";
    recuadro(38,37,22,2);
    gotoxy(40,38); cout << "CONTINUAR COMPRANDO";

    recuadro(70,36,50,4);
    recuadro(72,37,22,2);
    gotoxy(76,38); cout << "CANCELAR COMPRA";
    recuadro(96,37,22,2);
    gotoxy(100,38); cout << "ELEJIR  BUTACAS";



    gotoxy(44,16); cin >> dni;
    while(dni <= 999999 || dni > 100000000){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(12,15); cout << "EJ: > XX.XXX.XXX";
    gotoxy(44,16); cout << "          ";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(44,16); cin >> dni;
    }
    gotoxy(12,15); cout << "                ";

    gotoxy(44,19); cin.ignore(); cin.getline(nombre,20);
    gotoxy(44,22); cin.getline(apellido,40);

    gotoxy(44,25); cin >> DD;
    gotoxy(47,25); cin >> MM;
    gotoxy(50,25); cin >> AA;
    while(fechasv(DD,MM,AA)==1 || fechasv(DD,MM,AA)==5){
    SetConsoleTextAttribute(hConsole, 4);
    gotoxy(12,24); cout<<"LA FECHA NO EXISTE";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(44,25); cout<<"  ";
    gotoxy(47,25); cout<<"  ";
    gotoxy(50,23); cout<<"    ";
    gotoxy(44,25); cin >> DD;
    gotoxy(47,25); cin >> MM;
    gotoxy(50,25); cin >> AA;
    }
    gotoxy(12,24); cout<<"                  ";
    edad = fechasv(DD,MM,AA);

    fechaNac.cargar(DD,MM,AA);

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
        menuUsuario();
        return false;
        break;
        case 2:
        guardar();
        return true;
        break;
        }
        }
        switch(pos){
        case 1:
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(14,37,22,2);
        gotoxy(18,38); cout << "CANCELAR COMPRA";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(38,37,22,2);
        gotoxy(40,38); cout << "CONTINUAR COMPRANDO";
        break;
        case 2:
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(14,37,22,2);
        gotoxy(18,38); cout << "CANCELAR COMPRA";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(38,37,22,2);
        gotoxy(40,38); cout << "CONTINUAR COMPRANDO";
        break;
        }
        opc = getch();
}
}
bool cliente::guardar(){
    bool grabo;
    FILE *p=fopen("Dat/clientes.dat","ab");
    if(p==NULL){
        return false;
    }
    grabo=fwrite(this, sizeof(cliente),1,p);
    fclose(p);
return grabo;
}

///Funciones de muestra
void cliente::listar(){
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
        cout << char(219) << char(195) << " ";
        SetConsoleTextAttribute(hConsole, 7);
        cout << dni<<" "<<char(175)<<" "<<nombre<<" "<<apellido<<" ";
        fechaNac.mostrar();
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
void cliente::leerUltimaPos(){
    int pos=-1;
    FILE *p;
	p=fopen("Dat/clientes.dat","rb");
	if(p==NULL){
        fclose(p);
    }
    while(fread(this, sizeof *this,1,p)==1){
        pos++;
    }
    fclose(p);
    leedisco(pos);
}
void cliente::leePos(){
	int pos=0;
	system("cls");
	while(leedisco(pos++)==1){
        listar();
    }
	if(pos==1){
    }
}
int  cliente::leedisco(int pos){
	int x;
	FILE *p;
	p=fopen("Dat/clientes.dat","rb");
	if(p==NULL){
    return 0;
    }
	fseek(p,pos*sizeof *this,0);
	x=fread(this,sizeof *this,1,p);
	fclose(p);
	return x;
}


#endif // CCLIENTE_H_INCLUDED
