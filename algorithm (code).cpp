#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>

using namespace std;

int d[5001];
int mod=1000000;

int main(){
	char s[5002];
	scanf("%s", s+1);
	d[0]=1;
	int n=strlen(s+1);
	for(int i=1; i<=n; i++){
		int x=s[i]-'0';
		if(1<=x && x<=9){
			d[i]+=d[i-1];
			d[i]%=mod;
		}
		if(i==1){
			continue;
		}
		x=(s[i-1]-'0')*10+(s[i]-'0');
		if(10<=x && x<=26){
			d[i]+=d[i-2];
			d[i]%=mod;
		}
	}
	cout << d[n];
	return 0;
}
