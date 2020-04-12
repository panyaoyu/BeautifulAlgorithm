/*
ÊäÈë
8
Êä³ö
92 
*/ 
#include<bits/stdc++.h>
using namespace std;
int n;
int cnt=0;
int pos[16];
void dfs(int k){
	if(k==n){
		cnt++;
		return;
	}
	int j;
	for(int i=0;i<n;i++){
		for(j=0;j<k;j++){		
			if(pos[j]==i||
				abs(k-j)==abs(i-pos[j]))
				break;
		}
		if(j==k){
			pos[k] = i;
			dfs(k+1);
		}
	}
	return; 
}
int main(){
	cin>>n;
	dfs(0);
	cout<<cnt<<endl;
	return 0;
}
