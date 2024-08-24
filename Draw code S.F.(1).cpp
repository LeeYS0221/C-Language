#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	
	p=(int*)malloc(sizeof(int)*5);
	
	for(int i=0; i<5; i++){
		p[i] = i;
		printf("%d ", p[i]);
	}
	printf("\n");
	
	for(int i=0; i<5; i++){
		printf("%d ", *p + i);
	}
	
	free(p);
	return 0;
}
