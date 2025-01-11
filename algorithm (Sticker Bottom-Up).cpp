#include<iostream>
#include<algorithm>

using namespace std;

int d[2][100001];

int main(){
	int T;
	int n;
	int sum;
	cin >> T;
	for(int i=0; i<T; i++){
		sum=0;
		cin >> n;
		for(int j=2; j<=n+1; j++){
			scanf("%d", &d[0][j]);
		}
		for(int j=2; j<=n+1; j++){
			scanf("%d", &d[1][j]);
		}
		
		for(int j=2; j<=n+1; j++){
			d[0][j]+=max(d[1][j-1],d[1][j-2]);
			d[1][j]+=max(d[0][j-1], d[0][j-2]);
		}
		
		sum = max(d[0][n+1], d[1][n+1]);
		cout << sum << endl;
	}
	return 0;
}
