#include<stdio.h>
int main(){
	char S[1001];
	int allo[26]={0,};
	int min=0;
	scanf("%s", S);
	for(int i=0; i<26; i++){
		allo[i]=-1;
	}
	for(int i=97; i<=122; i++){
		min=0;
		for(int j=0; S[j]; j++){
			if(S[j]==i&&min==0){
				allo[i-97]=j;
				min++;
			}
		}
	}
	for(int i=0; i<26; i++){
		printf("%d ", allo[i]);
	}
	
	return 0;
}
