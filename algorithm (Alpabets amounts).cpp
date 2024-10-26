#include<stdio.h>
int main(){
	char word[1001];
	int al[26]={0,};
	scanf("%s", word);
	for(int i=65; i<=90; i++){
		for(int j=0; j<word[j]; j++){
			if(word[j]==i||word[j]==i+32){
				al[i-65]++;
			}
		}
	}
	for(int i=0; i<26; i++){
		printf("%d ", al[i]);
	}
	
	return 0;
}
