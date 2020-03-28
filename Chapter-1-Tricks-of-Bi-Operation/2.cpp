//找出落单的数
#include<iostream>
using namespace std;
int main(){
	int N = 10;
	int arr[2*N+1];
	cout<<"打印数组：" ;
	for(int i=0;i<2*N+1;i++){
		arr[i] = i/2;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int tmp=0;
	for(int i=0;i<2*N+1;i++){
		tmp = tmp^arr[i];
	}
	cout<<"落单的数字是"<<tmp<<endl;
	return 0;
} 
