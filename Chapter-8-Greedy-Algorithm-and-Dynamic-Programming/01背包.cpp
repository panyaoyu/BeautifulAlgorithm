/*
 ‰»Î
4
2 3
1 2
3 4
2 2
5 
 ‰≥ˆ 
7 
*/
#include<bits/stdc++.h>
using namespace std;
int dp[105][10005]={0};
int nc;
struct obj{
	int w;
	int v;
	obj(int wwint vv):w(ww)v(vv){}
};
vector<obj> a;
int main(){
	cin>>n; 
	int tmp1tmp2;
	for(int i=0;i<n;i++){
		scanf("%d%d"&tmp1&tmp2);
		a.push_back(obj(tmp1tmp2));
	}
	cin>>c;
	for(int i=0;i<c;i++){
		if(i>=a[0].w)
			dp[0][i] = a[0].v;
	}
	for(int i=1;i<n;i++)
		for(int j=0;j<=c;j++){
		if(j>=a[i].w)
			dp[i][j] = max(dp[i-1][j]dp[i-1][j-a[i].w]+a[i].v);
		else
			dp[i][j] = dp[i-1][j];
	}
	cout<<dp[n-1][c]<<endl;
	return 0;
}
