#include<stdio.h>
#include<string.h>
int main(){
	char start[15]= "C3";
	char end[15]="coding";
	int len;
	
	printf("start = %s %d\n", start, strlen(start));
	printf("end = %s %d\n", end, strlen(end));
	
	strcat(start, end);
	len=strlen(start);
	printf("%s %d\n", start, len);
	
	return 0;
}
