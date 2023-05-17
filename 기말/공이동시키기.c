#include <stdio.h>
//#include "Console.h"

#include <sysinfoapi.h>
#define ScreenWIDTH  80
#define ScreenHEIGHT 50

enum ConsolColor{ BLACK, DARKBLUE, DARKGREEN,
    DARKCYAN, DARKRED, DARKMAGENTA, DARKYELLOW,
    GRAY, DARKGRAY, BLUE, GREEN, CYAN,
    RED, MAGENTA, YELLOW, WHITE, LIGHTGRAY = 7,
    ORIGINAL = 7, ORIGINALFONT = 7, ORIGINALBG = 0
}; 

void init(int ScrWidth,int ScrHeight) {
   char temp[40];
   sprintf(temp,"mode con cols=%d lines=%d | title MyGame",
                 ScrWidth,ScrHeight);
   system(temp);
}

void setColor(int color) {
   // text color change 
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (info.wAttributes&0xf0) | (color &0xf));
}

void gotoxy(int x,int y) {
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   COORD pos;
   pos.X = x;
   pos.Y = y;
   SetConsoleCursorPosition(consoleHandle,pos);
}

void noCursor() {   // No Cursor
    CONSOLE_CURSOR_INFO CurInfo;
    CurInfo.dwSize=1;
    CurInfo.bVisible=FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo);
}

void consoleCls() {
   HANDLE hConsole;
   SMALL_RECT scrollRect;
   COORD scrollTarget;
   CHAR_INFO fill;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    scrollRect.Left = 0;
    scrollRect.Top = 0;
    scrollRect.Right = csbi.dwSize.X;
    scrollRect.Bottom = csbi.dwSize.Y;
    scrollTarget.X = 0;
    scrollTarget.Y = (SHORT)(0 - csbi.dwSize.Y);

    // Fill with empty spaces with the buffer's default text attribute.
    fill.Char.UnicodeChar = TEXT(' ');
    fill.Attributes = csbi.wAttributes;

    // Do the scroll
    ScrollConsoleScreenBuffer(hConsole, &scrollRect, NULL, scrollTarget, &fill);   
}


char scr[ScreenWIDTH][ScreenHEIGHT]={0,};

void clearScreen() {
   int i;
   int j;
   for(i=0;i<ScreenWIDTH;i++) 
      for(j=0;j<ScreenHEIGHT;j++)
         scr[i][j]=0;
   //system("cls");
   consoleCls();
}

void draw(int x,int y,int color) {
   scr[x][y]=color;
}

void renderScreen() {
   int i;
   int j;
   for(i=0;i<ScreenWIDTH;i++) {
      for(j=0;j<ScreenHEIGHT;j++) {      
         if(scr[i][j]!=0) {
            setColor(scr[i][j]);
            gotoxy(i,j);
            printf("*");
         }
      }
   }
}

main() {
   int x,y,dx;
   int c=0; int keep=1;
   int i,j;
   unsigned long startTime,endTime;
   init(ScreenWIDTH,ScreenHEIGHT);
   noCursor();
   x=0; y=25; dx=1; 
   startTime = GetTickCount64();
   while(keep) {
      clearScreen();
      draw(x,y,GREEN);
    //   x=x+dx;
      c=c+1;
    //   if(c>78)
    //      keep=0;
      renderScreen();
      Sleep(20);
   }   
   endTime = GetTickCount64();
   printf("%d secs\n",endTime-startTime);
   printf("Hello\n");
}