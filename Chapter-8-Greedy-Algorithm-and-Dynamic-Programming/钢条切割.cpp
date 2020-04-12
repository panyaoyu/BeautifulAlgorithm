/*
ÊהÈכ
10
1 5 8 16 10 17 17 20 24 30
Êה³צ 
37 
*/
#include<bits/stdc++.h>
using namespace std; 
int n; 
int v[100005]={0};
int dp[100005]={0};
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d"&v[i]);
	for(int i=1;i<=n;i++){
		int maxp = 0;
		for(int j=1;j<=i;j++){
			maxp = max(maxpdp[i-j]+v[j]);
		}
		dp[i] = maxp;
	}
	cout<<dp[n]<<endl;
}
