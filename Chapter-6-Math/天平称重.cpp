/*
输入
5
输出
9-3-1
输入
19
输出
27-9+1
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	int a[15] = {0};
	cin>>n;
	int i=0;
	while(n){
		if(n%3==1)	
			a[i] = 1;
		if(n%3==2){
			a[i] = -1;
			n +=3;
		}
		n /= 3;
		i++; 
	} 
	int flag = 0;
	for(int i=14;i>=0;i--){
		if(a[i])
			if(flag)
				cout<<(a[i]>0?"+":"-")<<pow(3,i);
			else{
				flag = 1;
				cout<<(a[i]>0?"":"-")<<pow(3,i);
			}
	}
	return 0;
} 
