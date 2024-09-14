#include<stdio.h>
int main(){
	int n;
	int ai;
	int sum=0;
	int ave=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &ai);
		sum+=ai;
	}
	
	ai=sum/n;
	
	if(ai>=80){
		printf("easy");
	}
	else if(ai>=60){
		printf("normal");
	}
	else{
		printf("hard");
	}
	
	return 0;
} 
