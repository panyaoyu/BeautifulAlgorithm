//将整数的奇偶位互换
#include<iostream>
using namespace std;
int main(){
	int ou = 0xaaaaaaaa;
	int ji = 0x55555555;
	int m =9;
	int n1,n2;
	n1 = m&ou;
	n2 = m&ji;
	n1 = n1>>1;
	n2 = n2<<1;
	cout<<(n1^n2)<<endl;
} 
