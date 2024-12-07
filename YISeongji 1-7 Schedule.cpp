#include<iostream>
#include<string>
using namespace std;
int main(){
	string S[5][7]={{"과학", "영어", "국어", "미술", "사회", "기가", "Na"},{"국어", "영어", "정보", "기가", "스포츠", "체육", "수학"},{"사회", "진로", "도덕", "음악", "수학", "체육", "Na"},{"과학", "미술", "체육", "수학", "도덕", "국어", "창체"},{"수학", "과학", "영어", "기가", "정보", "국어", "Na"}};
	string N;
	cout << "날짜를 알고 싶은 과목을 작성하시오: ";
	cin >> N;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<7; j++){
			if(S[i][j]==N){
				if(i==0){
					cout << "월요일 ";
				}
				else if(i==1){
					cout << "화요일 ";
				}
				else if(i==2){
					cout << "수요일 ";
				}
				else if(i==3){
					cout << "목요일 ";
				}
				else if(i==4){
					cout << "금요일 ";
				}
			}
		}
	}
	return 0;
}
