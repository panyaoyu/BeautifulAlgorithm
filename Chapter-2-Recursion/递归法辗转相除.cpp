//Õ·×ªÏà³ı·¨ 
#include<iostream>
using namespace std;
int zhanzhuanxiangchu(int m,int n ){
	if (m%n==0)
		return n;
	return zhanzhuanxiangchu(n,m%n);
}
int main(){
	int a = 35,b = 42;
	cout<<zhanzhuanxiangchu(a,b);
	return 0;
} 
