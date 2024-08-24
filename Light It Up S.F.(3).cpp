#include<stdio.h>
int main(){
	char str1[]="C3coding";
	char str2[10]="C3coding";
	
	printf("%d\n", str1 == str2);
	printf("%d\n", str1 == "C3coding");
	printf("%d\n", str2 == "C3coding");
	printf("%d\n", "C3coding" == "C3coding");
	printf("%d\n", str1 == "c3coding");
	
}
