#include<stdio.h>
#include<string.h>
int main(){
	char *sp="C3coding";
	char str[]="C3coding";
	int res;
	
	res=strcmp(sp, str);
	printf("%d\n", res);
	res=strcmp(sp, "C3coding");
	printf("%d\n", res);
	res=strcmp("C3coding", "C3coding");
	printf("%d\n", res);
	
	res=strcmp("test","text");
	printf("%d\n", res);
	res=strcmp("text","test");
	printf("%d\n", res);
	
	return 0;
}
