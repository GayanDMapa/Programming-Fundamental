#include<iostream>

using namespace std;

int main(){
	int marks[2][3]={{19,30,23},{20,30,40}};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<marks[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
