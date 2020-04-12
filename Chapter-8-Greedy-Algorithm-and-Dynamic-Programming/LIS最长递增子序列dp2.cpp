/*
ÊäÈë
10
4 2 3 1 5 6 4 8 5 9
Êä³ö 
6
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005];
int dp[10005]={0};
int main(){
	cin>>n;
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]);
	} 
	dp[1] = a[0];
	int p = 1;
	for(int i=0;i<n;i++){
		if(a[i]>dp[p])
			dp[++p] = a[i];
		else{
			for(int j=1;j<=p;j++)
				if(a[i]<dp[j])
				dp[j] = a[i];
		}
	}
	cout<<p<<endl;
}
