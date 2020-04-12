/*
INPUT
100
OUTPUT
2 2 5 5 
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int flag = 0;
	int tmp = n;
	for(int i=2;i*i<tmp;i++){
		while(n%i==0){
			cout<<i<<" ";
			n /= i;
		}
	}		
	return 0;
} 
