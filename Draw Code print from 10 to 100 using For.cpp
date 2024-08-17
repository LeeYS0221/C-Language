#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){
	int X, Y;
	COORD pos;
	pos.X=20;
	pos.Y=4;
	for(int i=10; i<=100; i=i+10){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);	
		printf("%d", i);
		Sleep(1000);
	}
	
	return 0;
}
