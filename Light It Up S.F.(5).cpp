#include<stdio.h>
#include<string.h>
int main(){
	char name1[10];
	char name2[10];
	
	strcpy(name1, "가");
	strcpy(name1, "나");
	
	printf("%d\n", strcmp(name1, name2));
	printf("%d\n", strcmp("나", "가"));
	
	return 0;
}
