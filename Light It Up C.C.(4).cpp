#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define X_END 79
#define Y_END 24

void GotoXY(int x, int y);
void Move_UpDown_Key(char key, int *x, int *y);

int main(){
	char key;
	int x= 40, y= 0;
	
	do{
		x = rand()%60;
		GotoXY(x, y);
		printf("$");
		key = getch();
		key = getch();
		Move_UpDown_Key(key, &x, &y);
	}while(key!=27);
	
	return 0;
}

void GotoXY(int x, int y){
	COORD Pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Move_UpDown_Key(char key, int *x, int *y){
	switch(key){
		case 72:
			*y=*y-1;
			if(*y < 1) *y = Y_END;
			break;
		case 80:
			*y = *y + 1;
			if(*y > Y_END) *y = 1;
			break;
		case 13:
			system("cls");
	}
}

