//�ҳ�Ψһ�ɶԵ���
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int N = 11;
	int tmp=0;
	int  arr[N];
	int index = rand()%(N-1);
	for(int i=0;i<N;i++){
		arr[i] = i+1;
	}
	arr[N-1] = index+1;
	cout<<"��ӡ���飺" ;
	for(int i=0;i<N;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=0;i<N;i++){
		tmp=tmp^(i);
	}
	for(int i=0;i<N;i++){
		tmp=tmp^arr[i];
	}
	cout<<"�ظ���������"<<tmp<<endl; 
	return 0;
} 
