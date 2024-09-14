#include<stdio.h>
int main(){
	int H, M, S;
	int T;
	int TH, TM, TS;
	scanf("%d %d %d %d", &H, &M, &S, &T);
	TS=T%60;
	TH=(T-TS)/3600;
	TM=(T-TS-TH*3600)/60;
	S=S-TS;
	M=M-TM;
	H=H-TH;
	if(S<0){
		S=S+60;
		M=M-1;
	}
	if(M<0){
		M=M+60;
		H=H-1;
	}
	if(H<0){
		H=H+24;
	}
		
	printf("%d %d %d", H, M, S);
}
