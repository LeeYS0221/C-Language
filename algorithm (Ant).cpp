#include<iostream>
using namespace std;
int main(){
	int w, h, p, q, t;
	cin >> w >> h >> p >> q >> t;
	int moveP=1;
	int moveQ=1;
	for(int i=t; i>0; i--){
		if(p==w || p==0){
			moveP*=-1;
		}
		if(q==h || q==0){
			moveQ*=-1;
		}
		p+=moveP;
		q+=moveQ;
	}
	cout << p << " " << q;
	return 0;
}
