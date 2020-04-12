/*
ÊäÈë 
5
7
3 8
8 1 0 
2 7 4 4
4 5 2 6 5
Êä³ö
30 
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
int a[105][105]={0};
int dp[105]={0};
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)
		dp[i] = a[n-1][i];
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++){
			dp[j] = max(dp[j],dp[j+1])+a[i][j];
		}
	cout<<dp[0]<<endl;
	return 0;
}
