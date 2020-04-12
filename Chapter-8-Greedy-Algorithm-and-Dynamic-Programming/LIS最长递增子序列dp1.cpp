/*
 ‰»Î
10
4 2 3 1 5 6 4 8 5 9
 ‰≥ˆ 
6
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005];
int dp[10005];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]);
		dp[i] = 1; 
	} 
	for(int i=1;i<n;i++){
		int maxdp = 0;
		for(int j=0;j<i;j++){
			if(a[j]<a[i]&&dp[j]>maxdp)
				maxdp = dp[j];
		}
			dp[i] = max(dp[i-1],maxdp+1);
	}	
	for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";
	cout<<endl;
	cout<<dp[n-1]<<endl;
	return 0;
}
