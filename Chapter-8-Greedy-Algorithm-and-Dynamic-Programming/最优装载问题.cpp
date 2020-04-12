/*
这是最简单的背包问题
输入
5
2 5 6 8 4 
11
输出
3 
*/ 
#include<bits/stdc++.h>
using namespace std;
int nc;
int w[100000];
int cnt=0;
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d"&w[i]);
	cin>>c;
	sort(ww+n);
	for(int i=0;i<n;i++){
		if(c-w[i]>=0){
			c -= w[i];
			cnt++;
		}
		else
			break;
	}
	cout<<cnt<<endl; 
} 
