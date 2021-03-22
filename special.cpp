#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<dir.h>
#include<dos.h>
#include<string.h>
using namespace std;
void SetColor(int);
void ClearConsoleToColors(int,int);
void gotoxy(int,int);
void happyBirthdayName();
void birthdayCakeShape();

void drawArrow();
int animate(int);
void shape(int,int,int);
void shape1(int,int,int);

void wait();
void shape2();
void curve();

void text1();
int main()
{
    int count = 1;
    //ClearConsoleToColors(4,10);
    system("color f5");

    //system("CLS");
    //cout<<"Hello there...";

    getch();
    wait();
    gotoxy(46,5);Sleep(1000);
    SetColor(4);cout<<"Happy Birthday ";
    SetColor(5);cout<<"Happy Birthday\n";
    for(int i=6; i<15; i++)
    {
        gotoxy(46-((i-5)*5),i);
        SetColor(4);cout<<"Happy Birthday";
        gotoxy(46+14+((i-5)*5),i);
        SetColor(5);cout<<"Happy Birthday\n";
        Sleep(200);
    }
    for(int i=15; i<23; i++)
    {
        gotoxy(count*5,i);
        SetColor(4);cout<<"Happy Birthday";
        gotoxy(105-(count*5),i);
        SetColor(5);cout<<"Happy Birthday\n";
        Sleep(200);
        count++;
    }
    gotoxy(46,23);
    SetColor(4);cout<<"Happy Birthday ";
    SetColor(5);cout<<"Happy Birthday\n";
    Sleep(1000);
    count = 1;
    //shape2();

    happyBirthdayName();Sleep(2000);
    drawArrow();Sleep(1000);
    birthdayCakeShape();
    //happyBirthdayName();
    animate(8);Sleep(1000);
    curve();
    shape2();
    text1();
    //gotoxy(45,1);
    //cout<<"Happy Birthday";
    getch();
    return 0;
}

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);SetColor(5);
    //Get the handle to the current output buffer...
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    //This is used to reset the carat/cursor to the top left.
    COORD coord = {0, 0};Sleep(20);
    //A return value... indicating how many chars were written
    //   not used but we need to capture this since it will be
    //   written anyway (passing NULL causes an access violation).
    DWORD count;

    //This is a structure containing all of the console info
    // it is used here to find the size of the console.
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    //Here we will set the current color
    SetConsoleTextAttribute(hStdOut, wColor);
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //This fills the buffer with a given character (in this case 32=space).
        FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
        //This will set our cursor position for the next print statement.
        SetConsoleCursorPosition(hStdOut, coord);
    }
    return;
}
void gotoxy(int x, int y)           //definition of gotoxy function//
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void birthdayCakeShape()
{
    cout<<"\n\n\t\t\t\t\t\t    .";Sleep(20);cout<<"   .";Sleep(20);cout<<"   .";Sleep(20);cout<<"   .\n";
    Sleep(100);
    cout<<"\t\t\t\t\t\t   /";Sleep(20);cout<<"   /";Sleep(20);cout<<"   /";Sleep(20);cout<<"   /\n";
    Sleep(200);
    cout<<"\t\t\t\t\t\t  _";Sleep(20);cout<<"#";Sleep(20);cout<<"__";Sleep(20);cout<<"#";Sleep(20);cout<<"__";Sleep(20);cout<<"#";Sleep(20);cout<<"_";Sleep(20);cout<<"#";Sleep(20);cout<<"__";Sleep(20);cout<<"#";Sleep(20);cout<<"_\n";
    Sleep(100);
    //cout<<"\t\t\t\t\t\t .-.-.-.-.-.-.-.-.\n";

    cout<<"\t\t\t\t\t\t{";Sleep(20);cout<<"_";Sleep(20);cout<<"   ";Sleep(20);cout<<"H";Sleep(20);cout<<" A";Sleep(20);cout<<" P";Sleep(20);cout<<" P";Sleep(20);cout<<" Y";Sleep(20);cout<<"  _}\n";SetColor(2);
    cout<<"\t\t\t\t\t    _";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);SetColor(4);cout<<"{";SetColor(2);Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);SetColor(4);cout<<"}";SetColor(2);Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_\n";
    Sleep(100);
    //cout<<"\t\t\t\t\t   .-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
    cout<<"\t\t\t\t\t   {";Sleep(20);cout<<"_";Sleep(20);cout<<"  +";Sleep(20);cout<<"                    *";Sleep(20);cout<<" _";Sleep(20);cout<<"}\n";
    Sleep(100);
    cout<<"\t\t\t\t\t   {";Sleep(20);cout<<"_";Sleep(20);cout<<"     ";Sleep(20);cout<<"B ";Sleep(20);cout<<"I ";Sleep(20);cout<<"R ";Sleep(20);cout<<"T ";Sleep(20);cout<<"H ";Sleep(20);cout<<"D ";Sleep(20);cout<<"A ";Sleep(20);cout<<"Y     ";Sleep(20);cout<<"_}\n";SetColor(5);
    Sleep(100);
    //cout<<"\t\t\t\t    .-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.-.-.-.-.-.\n";
    cout<<"\t\t\t\t     _";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"{";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<".";Sleep(20);cout<<"_";Sleep(20);cout<<"}";Sleep(20);cout<<"____";Sleep(20);cout<<"___\n";
    Sleep(100);
    cout<<"\t\t\t\t    {";Sleep(20);cout<<"_     ";Sleep(20);cout<<"*                            ";Sleep(20);cout<<"+     ";Sleep(20);cout<<"_";Sleep(20);cout<<"}\n";
    Sleep(100);
    cout<<"\t\t\t\t    ";Sleep(20);cout<<"{";Sleep(20);cout<<"_";Sleep(20);cout<<"      >";Sleep(20);cout<<"        N";Sleep(20);cout<<" A";Sleep(20);cout<<" M";Sleep(20);cout<<" E";Sleep(20);cout<<"          <";Sleep(20);cout<<"       _";Sleep(20);cout<<"}\n";
    Sleep(100);
    cout<<"\t\t\t\t.";Sleep(20);cout<<"-";Sleep(20);cout<<"-";Sleep(20);cout<<"-";Sleep(20);cout<<"{";Sleep(20);cout<<"_";Sleep(20);cout<<"         +";Sleep(20);cout<<"                  *";Sleep(20);cout<<"           _";Sleep(20);cout<<"}";Sleep(20);cout<<"-";Sleep(20);cout<<"-";Sleep(20);cout<<"-";Sleep(20);cout<<".\n";SetColor(4);
    Sleep(100);
    cout<<"\t\t\t       (";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<"~";Sleep(20);cout<<")\n";
    Sleep(100);
}
void drawArrow()
{

    cout<<"\n\t\t\t\t\t\t     _";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_";Sleep(20);cout<<"_\n";
    for(int i=0; i<10; i++)
    {
        cout<<"\t\t\t\t\t\t    |        |\n";
        Sleep(100);
    }
    cout<<"\t\t\t\t\t        ____|        |____\n";Sleep(200);SetColor(5);
    cout<<"\t\t\t\t\t        \\                /\n";Sleep(200);
    cout<<"\t\t\t\t\t         \\              /\n";Sleep(200);
    cout<<"\t\t\t\t\t          \\            /\n";Sleep(200);
    cout<<"\t\t\t\t\t           \\          /\n";Sleep(200);
    cout<<"\t\t\t\t\t            \\        /\n";Sleep(200);SetColor(4);
    cout<<"\t\t\t\t\t             \\      /\n";Sleep(200);
    cout<<"\t\t\t\t\t              \\    /\n";Sleep(200);
    cout<<"\t\t\t\t\t               \\  /\n";Sleep(200);
    cout<<"\t\t\t\t\t                \\/\n";Sleep(200);
}
int animate(int num)
{
    //system("COLOR 0B");

    if(num == 0)
    return 0;
    else
    animate(num-1);


    SetColor(6);
    gotoxy(51,75);
    cout<<"\\";
    gotoxy(55,75);
    cout<<"\\";
    gotoxy(59,75);
    cout<<"\\";
    gotoxy(63,75);
    cout<<"\\";


    gotoxy(50,74);
    cout<<".";
    gotoxy(52,74);
    cout<<" ";

    gotoxy(54,74);
    cout<<".";
    gotoxy(56,74);
    cout<<" ";

    gotoxy(58,74);
    cout<<".";
    gotoxy(60,74);
    cout<<" ";

    gotoxy(62,74);
    cout<<".";
    gotoxy(64,74);
    cout<<" ";
    Sleep(500);

    gotoxy(51,75);
    cout<<"/";
    gotoxy(55,75);
    cout<<"/";
    gotoxy(59,75);
    cout<<"/";
    gotoxy(63,75);
    cout<<"/";


    gotoxy(50,74);
    cout<<" ";
    gotoxy(52,74);
    cout<<".";
    gotoxy(46,0);
    gotoxy(54,74);
    cout<<" ";
    gotoxy(56,74);
    cout<<".";

    gotoxy(58,74);
    cout<<" ";
    gotoxy(60,74);
    cout<<".";

    gotoxy(62,74);
    cout<<" ";
    gotoxy(64,74);
    cout<<".";
    gotoxy(0,90);
    Sleep(500);
}
void shape(int x,int y,int z)
{
    string str = "~~~>";
    string str2 = " ";
    gotoxy(x,y);
    for(int i=0;i<z;i++)
    {
        cout<<str;
        Sleep(12);
        for(int k=0;k<str.length();k++)
        {
            gotoxy(i+k,y);
            cout<<" ";
        }
    }
}
void shape1(int x,int y,int z){
    string str = "<~~~";
    string str2 = " ";
    gotoxy(x,y);
    for(int i=x;i>x-z;i--)
    {
        cout<<str;
        Sleep(12);
        for(int k=str.length();k>=0;k--)
        {
            gotoxy(i+k,y);
            cout<<" ";
            if(k==0)
            gotoxy(i+k-1,y);
        }
    }
    cout<<str;
}
void wait(){
    cout<<"\t\tLoading...\n\n";
    cout<<"\t\t";
        gotoxy(83,2);
    SetColor(2);cout<<"%";
    gotoxy(16,2);
    for(int i=1;i<=50;i++)
    {
        SetColor(5);cout<<"|";
        if(i<10)
        {
            gotoxy(80, 2);
            SetColor(2);cout << i * 2;
            Sleep(180);
            gotoxy(16 + i, 2);
        }
        else if(i<30 && i>10)
        {
            gotoxy(80, 2);
            SetColor(2);cout << i * 2;
            Sleep(100);
            gotoxy(16 + i, 2);
        }
        else
        {
            gotoxy(80, 2);
            SetColor(2);cout << i * 2;
            Sleep(50);
            gotoxy(16 + i, 2);
        }
    }
}
/*void shape2(){
    int count = 0;
    gotoxy(60,1);
//    char str[4] = {"|","|","|","\"};
    for(int i=0; i<10; i++)
    {
gotoxy(60,i);cout<<"    |  |\n";
gotoxy(60,i);cout<<"    |  |\n";
gotoxy(60,i);cout<<"    |  |\n";
gotoxy(60,i);cout<<"   _|  |_\n";
gotoxy(60,i);cout<<"   \    /\n";
gotoxy(60,i);cout<<"    \  /\n";Sleep(20);
gotoxy(60,i);cout<<"     \/\n";
        Sleep(200);
    }
}*/

void happyBirthdayName(){
cout<<"\n\n";SetColor(2);
cout<<"      ___";Sleep(10);cout<<"            ___";Sleep(10);cout<<"            ____";Sleep(10);cout<<"             ____ ";Sleep(10);SetColor(4);cout<<"        ___\n";SetColor(2);
cout<<"     /";Sleep(10);cout<<"\\";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"\\";Sleep(10);cout<<"          /";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"          /";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"           /";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);SetColor(4);cout<<"       |";Sleep(10);cout<<"\\";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"\\ \n";SetColor(2);
cout<<"    /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"         /";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"        /";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"         /";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);SetColor(4);cout<<"  \\";Sleep(10);cout<<"      |";Sleep(10);cout<<":";Sleep(10);cout<<"|";Sleep(10);cout<<" | \n";SetColor(2);
cout<<"   /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"/         ";Sleep(10);cout<<"/";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"      /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<":";Sleep(10);;cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"       /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<":";Sleep(10);SetColor(4);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"     |";Sleep(10);cout<<":";Sleep(10);cout<<"|";Sleep(10);cout<<" | \n";SetColor(2);
cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<" \\";Sleep(10);cout<<"  ___";Sleep(10);cout<<"    /";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"    /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<" \\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"     /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);SetColor(4);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<" \\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"    |";Sleep(10);cout<<":";Sleep(10);cout<<"|";Sleep(10);cout<<"_";Sleep(10);cout<<"|";Sleep(10);cout<<"___ \n";SetColor(2);
cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);SetColor(2);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<" \\";Sleep(10);cout<<"/";Sleep(10);cout<<"\\";Sleep(10);cout<<"__";Sleep(10);cout<<"\\";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"\\";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"\\";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"__";Sleep(10);cout<<"\\";Sleep(10);SetColor(4);cout<<"   /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"__";Sleep(10);cout<<"\\";Sleep(10);cout<<"   /";Sleep(10);cout<<"";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"__";Sleep(10);cout<<"\\ \n";SetColor(2);
cout<<"/";Sleep(10);cout<<":";Sleep(10);SetColor(2);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<"/";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"\\";Sleep(10);cout<<"\\";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);SetColor(4);cout<<" /";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"~";Sleep(10);cout<<"~";Sleep(10);cout<<"/";Sleep(10);cout<<"` \n";SetColor(2);
cout<<"\\";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  \\";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);SetColor(4);cout<<"  /";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"  \\";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  / \n";SetColor(2);
cout<<"      /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);SetColor(4);cout<<"         /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"    \\";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<" /";Sleep(10);cout<<"    \\";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  / \n";SetColor(2);
cout<<"     /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);SetColor(4);cout<<"  /";Sleep(10);cout<<"         /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  \\";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<"             \\";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<"             \\";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/ \n";SetColor(2);
SetColor(4);cout<<"     \\";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/";Sleep(10);cout<<"          \\";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/ \n";SetColor(2);

cout<<"\n\n";
cout<<"      ___";Sleep(10);cout<<"                       ___";Sleep(10);cout<<"        ___";Sleep(10);cout<<"            ___";Sleep(10);cout<<"           ___";Sleep(10);cout<<"           ___";Sleep(10);cout<<"        ";SetColor(4);cout<<"___ \n";SetColor(2);
cout<<"     ";Sleep(10);cout<<"/\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"          ___";Sleep(10);cout<<"        /\\";Sleep(10);cout<<"  \\      /";Sleep(10);cout<<"\\  \\";Sleep(10);cout<<"          /\\";Sleep(10);cout<<"__\\";Sleep(10);cout<<"         /\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"         /\\";Sleep(10);SetColor(4);cout<<"  \\";Sleep(10);cout<<"      |\\";Sleep(10);cout<<"__\\ \n";SetColor(2);
cout<<"    /:";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"        /";Sleep(10);cout<<"\\  ";Sleep(10);cout<<"\\      ";Sleep(10);cout<<"/:";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\     ";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\  \\";Sleep(10);cout<<"        /";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"        /:";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\       ";Sleep(10);SetColor(4);cout<<"/:";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\     ";Sleep(10);cout<<"|:";Sleep(10);cout<<"| | \n";SetColor(2);
cout<<"   /:";Sleep(10);cout<<"/\\";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"       \\";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\    ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/\\";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"     \\";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"      /:";Sleep(10);cout<<"/__";Sleep(10);cout<<"/        ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/\\";Sleep(10);cout<<":\\";Sleep(10);SetColor(4);cout<<"  \\";Sleep(10);cout<<"     /:";Sleep(10);cout<<"/\\";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\";Sleep(10);cout<<"    |:";Sleep(10);cout<<"| | \n";SetColor(2);
cout<<"  /:";Sleep(10);cout<<":\\";Sleep(10);cout<<"~";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\__";Sleep(10);cout<<"\\      ";Sleep(10);cout<<"/:";Sleep(10);cout<<":\\";Sleep(10);cout<<"__\\";Sleep(10);cout<<"  /";Sleep(10);cout<<"::";Sleep(10);cout<<"\\";Sleep(10);cout<<"~";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\  ";Sleep(10);cout<<"\\    ";Sleep(10);cout<<"/:";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\    ";Sleep(10);cout<<"/:";Sleep(10);cout<<":\\";Sleep(10);cout<<" \\  ___";Sleep(10);cout<<"   /:";Sleep(10);SetColor(4);cout<<"/ /";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\__";Sleep(10);cout<<"\\   /";Sleep(10);cout<<":\\";Sleep(10);cout<<"  \\:";Sleep(10);cout<<"\\  ";Sleep(10);cout<<"\\   ";Sleep(10);cout<<"|:";Sleep(10);cout<<"|_";Sleep(10);cout<<"|___ \n";SetColor(2);
cout<<" /";Sleep(10);cout<<":";Sleep(10);cout<<"/";Sleep(10);cout<<"\\";Sleep(10);cout<<":";Sleep(10);cout<<"\\";Sleep(10);cout<<" \\:|";Sleep(10);cout<<"__|";Sleep(10);cout<<"  __/";Sleep(10);cout<<":";Sleep(10);cout<<"/\\";Sleep(10);cout<<"/__";Sleep(10);cout<<"/ /";Sleep(10);cout<<":/";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\ \\";Sleep(10);cout<<":\\";Sleep(10);cout<<"__\\";Sleep(10);cout<<"  /:";Sleep(10);SetColor(4);cout<<"/\\";Sleep(10);cout<<":\\";Sleep(10);cout<<"__\\";Sleep(10);cout<<"  /:";Sleep(10);cout<<"/\\";Sleep(10);cout<<":\\";Sleep(10);cout<<" \\/";Sleep(10);cout<<"\\__";Sleep(10);cout<<"\\ /";Sleep(10);cout<<":/";Sleep(10);cout<<"_/";Sleep(10);cout<<"  \\:";Sleep(10);cout<<"|__|";Sleep(10);cout<<" /:";Sleep(10);cout<<"/\\";Sleep(10);cout<<"\\  \\";Sleep(10);cout<<":\\__\\";Sleep(10);cout<<"  /:";Sleep(10);cout<<"::";Sleep(10);cout<<":\\";Sleep(10);cout<<"__\\ \n";SetColor(2);
cout<<" \\:";Sleep(10);cout<<"\\";Sleep(10);cout<<"~";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\/";Sleep(10);cout<<":/";Sleep(10);cout<<"  / ";Sleep(10);cout<<"/\\";Sleep(10);cout<<"/:";Sleep(10);cout<<"/ /";Sleep(10);cout<<"    /:";Sleep(10);cout<<"/ |";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\/";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);SetColor(4);cout<<" /:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"\\/";Sleep(10);cout<<"__/";Sleep(10);cout<<" /:";Sleep(10);cout<<"/ /";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\/";Sleep(10);cout<<":/";Sleep(10);cout<<"  / ";Sleep(10);cout<<"\\:";Sleep(10);cout<<"\\ ";Sleep(10);cout<<"\\  ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"//";Sleep(10);cout<<":/";Sleep(10);cout<<" /";Sleep(10);cout<<"\\\\";Sleep(10);cout<<" /";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<" /";Sleep(10);cout<<":/";Sleep(10);cout<<"~";Sleep(10);cout<<"~";Sleep(10);cout<<"/` \n";SetColor(2);
cout<<"  \\:";Sleep(10);cout<<"\\ ";Sleep(10);cout<<"\\:";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  \\";Sleep(10);cout<<"::";Sleep(10);cout<<"/_";Sleep(10);cout<<"/     ";Sleep(10);cout<<"\\/";Sleep(10);cout<<"_/";Sleep(10);cout<<"|:";Sleep(10);SetColor(4);cout<<"|:";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<" /";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"      \\";Sleep(10);cout<<"/_";Sleep(10);cout<<"/  ";Sleep(10);cout<<"\\:";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"   \\";Sleep(10);cout<<":\\";Sleep(10);cout<<" \\";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"/ ";Sleep(10);cout<<"\\/";Sleep(10);cout<<"_/";Sleep(10);cout<<"  \\";Sleep(10);cout<<"::";Sleep(10);cout<<"/  ";Sleep(10);cout<<"/ ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  / \n";SetColor(2);
cout<<"   \\:";Sleep(10);cout<<"\\/";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);SetColor(4);cout<<"    \\";Sleep(10);cout<<":\\";Sleep(10);cout<<"__\\";Sleep(10);cout<<"        |";Sleep(10);cout<<":|";Sleep(10);cout<<"\\/";Sleep(10);cout<<"__/";Sleep(10);cout<<" /";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"             /";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"     \\";Sleep(10);cout<<":\\";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"/        ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"/ ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"/ \n";SetColor(2);
cout<<"    \\:";Sleep(10);SetColor(4);cout<<":/";Sleep(10);cout<<"__/";Sleep(10);cout<<"      \\";Sleep(10);cout<<"/__";Sleep(10);cout<<"/        ";Sleep(10);cout<<"|:";Sleep(10);cout<<"| |";Sleep(10);cout<<"    \\";Sleep(10);cout<<"/__";Sleep(10);cout<<"/             ";Sleep(10);cout<<"/:";Sleep(10);cout<<"/  ";Sleep(10);cout<<"/       ";Sleep(10);cout<<"\\:";Sleep(10);cout<<":/";Sleep(10);cout<<"__/";Sleep(10);cout<<"        /";Sleep(10);cout<<":/";Sleep(10);cout<<"  /";Sleep(10);cout<<"  \\";Sleep(10);cout<<"/__/ \n";SetColor(2);
SetColor(4);cout<<"     ~~";Sleep(10);cout<<"                        \\";Sleep(10);cout<<"|";Sleep(10);cout<<"_";Sleep(10);cout<<"|";Sleep(10);cout<<"                      \\";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/";Sleep(10);cout<<"         ~~";Sleep(10);cout<<"            \\";Sleep(10);cout<<"/";Sleep(10);cout<<"__";Sleep(10);cout<<"/ \n";SetColor(2);
}
void curve(){
    shape(0,91,46);      //  Line 1
    shape1(100,92,38);   //  Line 2
    shape(0,93,31);      //  Line 3
    shape1(100,94,23);   //  Line 4
    shape(0,95,20);      //  Line 5
    shape(0,96,16);      //  Line 6
    shape1(100,97,6);    //  Line 7
    shape1(100,98,2);    //  Line 8
    shape1(100,91,47);   //  Line 1
    shape(0,92,38);      //  Line 2

    shape1(100,93,30);   //  Line 3
    shape(0,94,25);      //  Line 4
    shape1(100,95,16);   //  Line 5
    shape1(100,96,11);   //  Line 6
    shape(0,97,11);      //  Line 7
    shape(0,98,8);       //  Line 8
}


//      .-""""""-.
//    .'          '.
//   /   O    -=-   \
//  :                :
//  |                |  winking
//  : ',          ,' :
//   \  '-......-'  /
//    '.          .'
// jgs  '-......-'

void shape2(){
SetColor(4);cout<<"\n\t   \\______________ \t\t\t\t\t\t\t ___________________/";
SetColor(4);cout<<"\n\t\t\t   \\_____________";SetColor(5);
cout<<"  .";Sleep(10);cout<<"_";Sleep(100);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);SetColor(4);cout<<". _________________/ \n";SetColor(5);
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"| \n";
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<"|";Sleep(10);cout<<"\t\t    |";Sleep(10);cout<<"|";Sleep(10);cout<<"   \n";
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<"|";Sleep(10);cout<<"\t\t    |";Sleep(10);cout<<"|";Sleep(10);cout<<"   \n";
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<"|";Sleep(10);Sleep(10);cout<<"\t\t    |";Sleep(10);cout<<"|";Sleep(10);cout<<"   \n";
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<"|";Sleep(10);Sleep(10);cout<<"\t\t    |";Sleep(10);cout<<"|";Sleep(10);cout<<"   \n";
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<"|";Sleep(10);Sleep(10);cout<<"\t\t    |";Sleep(10);cout<<"|";Sleep(10);cout<<"   \n";
cout<<"\t\t\t\t\t   |";Sleep(10);cout<<"|";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"|";Sleep(10);cout<<"|";Sleep(10);cout<<"   \n";
cout<<"\t\t\t\t\t   /";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"\\  \n";
cout<<"\t\t\t\t\t  /";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"\\ \n";
cout<<"\t\t\t\t\t /";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"-";Sleep(10);cout<<".";Sleep(10);cout<<"\\ \n";
cout<<"\t\t\t\t\t/";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"/";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"\\";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"o";Sleep(10);cout<<"_";Sleep(10);cout<<"\\ \n";
cout<<"\t\t\t\t\t\\";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"_";Sleep(10);cout<<"/ \n";

}
void text1(){
    Sleep(500);gotoxy(49,102);Sleep(20);
    cout<<"Y_";
        gotoxy(51,102);Sleep(20);
    cout<<"O_";
        gotoxy(53,102);Sleep(20);
    cout<<"U_";
        gotoxy(55,102);Sleep(20);
    cout<<"R_";
    Sleep(500);    gotoxy(49,104);Sleep(20);
    cout<<"G_";
        gotoxy(51,104);Sleep(20);
    cout<<"I_";
        gotoxy(53,104);Sleep(20);
    cout<<"F_";
        gotoxy(55,104);Sleep(20);
    cout<<"T";
    Sleep(1000);    gotoxy(49,106);Sleep(20);
    cout<<"O_";
        gotoxy(51,106);Sleep(20);
    cout<<"V_";
        gotoxy(53,106);Sleep(20);
    cout<<"E_";
        gotoxy(55,106);Sleep(20);
    cout<<"R";
}
