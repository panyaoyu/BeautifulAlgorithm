//�ҳ��䵥����
#include<iostream>
using namespace std;
int main(){
	int N = 10;
	int arr[2*N+1];
	cout<<"��ӡ���飺" ;
	for(int i=0;i<2*N+1;i++){
		arr[i] = i/2;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int tmp=0;
	for(int i=0;i<2*N+1;i++){
		tmp = tmp^arr[i];
	}
	cout<<"�䵥��������"<<tmp<<endl;
	return 0;
} 
