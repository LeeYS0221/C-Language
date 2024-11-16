#include<iostream>
#include<cstring>
using namespace std;
struct Student{
	int ID;
	string Name;
	int Attend;
	int NotAttend;
	bool operator==(Student student){
		return Name==student.Name;
	};
};
int main(){
	int N;
	cin >> N;
	Student students[N];
	for(int i=0; i<N; i++){
		int I, C, A;
		string S;
		cin >> I >> S >> C >> A;
		students[i]={I,S,C,A};
	}
	int M;
	cin >> M;
//	string T[M];
	for(int i=0; i<M; i++){
//		cin >> T[i];
		string name;
		cin >> name;
		int flag = 0;
		for(int i=0; i<N; i++){
			if(students[i].Name==name){
				cout << students[i].ID << " " <<students[i].Attend << " " << students[i].NotAttend << endl;
				flag = 1;
				break;
			}
		}
		if(flag==0){
			cout << "-1";
		}	 
	}
	
	return 0;
}
