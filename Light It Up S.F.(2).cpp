#include<stdio.h>
int main(){
	char* sp1="C3coding";
	char* sp2="C3coding";
	
	printf("%d\n", sp1==sp2);
	printf("%d\n", sp1=="C3coding");
	printf("%d\n", sp2=="C3coding");
	printf("%d\n", "C3coding"=="C3coding");
	printf("%d\n", sp1=="c3coding");
	
	printf("%d %d\n", sp1, "c3coding");
	printf("%d %d\n", sp2, "c3coding");
	
	return 0;
}
