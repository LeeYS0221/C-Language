#include<stdio.h>
int main(){
	int acnt=0;
	int bcnt=0;
	int a[10];
	int b;
	
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<10; i++){
		scanf("%d", &b);
		if(a[i]<b){
			bcnt++;
		}
		else if(a[i]>b){
			acnt++;
		}
	}
	if(acnt<bcnt){
		printf("B");
	}
	else if(acnt>bcnt){
		printf("A");
	}
	else{
		printf("D");
	}
	
	return 0;
}

