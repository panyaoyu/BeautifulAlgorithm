//����������1�ĸ���
#include<iostream>
using namespace std;
int numberOfOne(int n){
	int number=0;
	while(n){
		n = n&(n-1);
		number++;
	}
	return number;
}
int main(){
	cout<<"9����"<<numberOfOne(9)<<"��1"<<endl;
	return 0; 
} 
