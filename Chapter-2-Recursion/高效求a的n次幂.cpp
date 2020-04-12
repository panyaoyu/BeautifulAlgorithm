//高效地求a的n次幂
#include<iostream>
using namespace std;
int pow(int a,int n){
	if (n==0)
		return 1; 
	int res = a;
	int ex = 1;
	while((ex<<1)<=n){
		res = res*res;
		ex<<=1;
	}
	//差n-ex次方没有乘到结果里
	return res*pow(a,n-ex);
} 
int main(){
	cout<<pow(2,15);
	return 0;
}
