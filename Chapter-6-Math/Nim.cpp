/*
Alice先手 
输入
3 
5 10 15
输出
Bob
输入
3
3 4 5
输出
Alice 
*/
#include<bits/stdc++.h>
using namespace std;
int a[100]; 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int res = 0;
	for(int i=0;i<n;i++)
		res = res^a[i];
	if(res)
		cout<<"Alice"<<endl;
	else
		cout<<"Bob"<<endl;
	return 0;
}
