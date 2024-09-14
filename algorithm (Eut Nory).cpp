#include<stdio.h>
int main(){
	int eut[3][4];
	int ans=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &eut[i][j]);
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			ans=ans+eut[i][j];
		}
		if(ans==0){
			printf("D\n");
		}
		else if(ans==1){
			printf("C\n");
		}
		else if(ans==2){
			printf("B\n");
		}
		else if(ans==3){
			printf("A\n");
		}
		else if(ans==4){
			printf("E\n");
		}
		ans=0;
	}
	
	return 0;
}
