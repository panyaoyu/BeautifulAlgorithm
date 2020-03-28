//二进制数中1的个数
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
	cout<<"9中有"<<numberOfOne(9)<<"个1"<<endl;
	return 0; 
} 
