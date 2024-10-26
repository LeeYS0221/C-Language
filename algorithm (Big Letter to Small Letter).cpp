#include<stdio.h>
int main(){
	char word[1001];
	scanf("%s", word);
	for(int i=0; word[i]; i++){
		if(word[i]>='A' && word[i]<='Z'){
			word[i]+=32;
		}
	}
	printf("%s", word);
	
	return 0;
}
