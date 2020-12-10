#ifndef VISUALES H INCLUDED
#define VISUALES H INCLUDED

///Colores
void gamaColores(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
  for(int k = 1; k < 255; k++){
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);
    cout << k << " I want to be nice today!" << endl;
  }
}

///Logos
void logo(int x, int y){

gotoxy(x, y);
cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219);
cout << char(187) << char(219) << char(219) << char(219) << char(187) << " " << " " << char(219) << char(219) << char(187);
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << char(219) << char(219);
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << char(219) << char(219) << char(187) << " ";
cout << " " << " " << " " << " " << char(219) << char(219) << char(187) << char(219) << char(219) << char(187);
cout << " " << " " << char(219) << char(219) << char(187) << endl;

gotoxy(x, y+1);
cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219);
cout << char(186) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(186);
cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188) << char(219) << char(219);
cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(188) << char(219) << char(219) << char(186) << " ";
cout << " " << " " << " " << " " << char(219) << char(219) << char(186) << char(200) << char(219) << char(219);
cout << char(187) << char(219) << char(219) << char(201) << char(188) << endl;

gotoxy(x, y+2);
cout << char(219) << char(219) << char(186) << " " << " " << char(200) << char(205) << char(188) << char(219) << char(219);
cout << char(186) << char(219) << char(219) << char(201) << char(219) << char(219) << char(187) << char(219) << char(219) << char(186);
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << " " << char(219) << char(219);
cout << char(219) << char(219) << char(219) << char(187) << " " << " " << char(219) << char(219) << char(186) << " ";
cout << " " << " " << " " << " " << char(219) << char(219) << char(186) << " " << char(200) << char(219);
cout << char(219) << char(219) << char(201) << char(188) << " " << endl;

gotoxy(x, y+3);
cout << char(219) << char(219) << char(186) << " " << " " << char(219) << char(219) << char(187) << char(219) << char(219);
cout << char(186) << char(219) << char(219) << char(186) << char(200) << char(219) << char(219) << char(219) << char(219) << char(186);
cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(188) << " " << " " << char(219) << char(219);
cout << char(201) << char(205) << char(205) << char(188) << " " << " " << char(219) << char(219) << char(186) << " ";
cout << " " << " " << " " << " " << char(219) << char(219) << char(186) << " " << char(219) << char(219);
cout << char(201) << char(219) << char(219) << char(187) << " " << endl;

gotoxy(x, y+4);
cout << char(200) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219);
cout << char(186) << char(219) << char(219) << char(186) << " " << char(200) << char(219) << char(219) << char(219) << char(186);
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << char(219) << char(219);
cout << char(186) << " " << " " << " " << " " << " " << char(219) << char(219) << char(219) << char(219);
cout << char(219) << char(219) << char(219) << char(187) << char(219) << char(219) << char(186) << char(219) << char(219) << char(201);
cout << char(188) << char(200) << char(219) << char(219) << char(187) << endl;

gotoxy(x, y+5);
cout << " " << char(200) << char(205) << char(205) << char(205) << char(205) << char(188) << " " << char(200) << char(205);
cout << char(188) << char(200) << char(205) << char(188) << " " << " " << char(200) << char(205) << char(205) << char(188);
cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << char(200) << char(205);
cout << char(188) << " " << " " << " " << " " << " " << char(200) << char(205) << char(205) << char(205);
cout << char(205) << char(205) << char(205) << char(188) << char(200) << char(205) << char(188) << char(200) << char(205) << char(188);
cout << " " << " " << char(200) << char(205) << char(188) << endl;

}
void logoChico(int x, int y){
gotoxy(x, y);
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << " " << " ";
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187);
gotoxy(x,y+1);
cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) <<" ";
cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188);
gotoxy(x,y+2);
cout << char(219) << char(219) << char(186) << " " << " " << char(200) << char(205) << char(188) << " ";
cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(187);
gotoxy(x,y+3);
cout << char(219) << char(219) << char(186) << " " << " " << char(219)<< char(219) << char(187) << " ";
cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(188);
gotoxy(x,y+4);
cout << char(200) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201);
cout << char(188) << " " << char(219) << char(219) << char(186);
gotoxy(x,y+5);
cout << " " << char(200) << char(205) << char(205) << char(205);
cout << char(205) << char(188) << " " << " "<<  char(200) << char(205) << char(188);
}

///Recuadros y cursores
void ShowConsoleCursor(bool showFlag){                                          //MOSTRARA DONDE SE ENCUENTRA EL CURSOR EN LA CONSOLA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
void recuadro(short iniX, short iniY, short ancho, short alto){                 //CON ESTA FUNCION NOS PERMITIRA CREAR UN RECUADRO
    int i, j;
    for(i=iniX; i<=iniX+ancho; i++){
        for(j=iniY; j<=iniY+alto; j++){
            gotoxy(i, j);
            if(i==iniX && j==iniY){cout << (char) 201;                          ///ARRIBA  - IZQUIERDA
            }
            else if(i==iniX+ancho && j==iniY){cout << (char) 187;               ///ARRIBA  - DERECHA
            }
            else if(i==iniX && j==iniY+alto){cout << (char) 200;                ///ABAJO   - IZQUIERDA
            }
            else if(i==iniX+ancho && j==iniY+alto){cout << (char) 188;          ///ABAJO   - DERECHA
            }
            else if(j==iniY || j==iniY+alto){cout << (char) 205;                ///ARRIBA  - ABAJO
            }
            else if(i==iniX || i==iniX+ancho){cout << (char) 186;               ///DERECHA - IZQUIERDA
            }
            else{cout << " ";                                                   ///DENTRO DEL RECUADRO
            }
        }
    }
}

///Numeros
void numeros(int _num,int _x, int _y){

int cant=1;
std::string s = std::to_string(_num);
char const *numero = s.c_str();

while(_num/10>0){
    _num=_num/10;
    cant++;
}
if(cant==2){
    gotoxy(_x,_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    gotoxy(_x,_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    _x=_x+15;
}else if(cant==1){
    gotoxy(_x,_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    gotoxy(_x,_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x,_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);

    gotoxy(_x+15,_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    gotoxy(_x+15,_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
    gotoxy(_x+15,_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);

    _x=_x+30;
}

for(int x=0;x<cant;x++){
    switch(numero[x]){
    case '1':
        gotoxy(_x+(x*15),_y);cout<<"    "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<"    "<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<"    "<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<"      "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<"      "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<"      "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<"      "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<"      "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<"    "<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<"    "<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<"    "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '2':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '3':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '4':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<"        "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '5':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '6':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '7':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<"        "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '8':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '9':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<"        "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    case '0':
        gotoxy(_x+(x*15),_y);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+1);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+2);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+3);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+4);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+5);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+6);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+7);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+8);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+9);cout<<char(219)<<char(219)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(219)<<char(219);
        gotoxy(_x+(x*15),_y+10);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    break;
    }
}
}












#endif // VISUALES H INCLUDED
