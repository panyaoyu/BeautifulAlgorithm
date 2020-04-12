/* 
 ‰»Î
10 12
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
 ‰≥ˆ
3
*/ 
#include<bits/stdc++.h>
using namespace std;
int N,M;
int cnt=0;
char a[110][110];
int visited[110][110]={0};
void dfs(int i,int j){
	if(a[i][j]!='W'||visited[i][j])
		return;
	visited[i][j] = 1;
	dfs(i-1,j-1); 
	dfs(i-1,j); 
	dfs(i-1,j+1);
	dfs(i,j-1);
	dfs(i,j+1);
	dfs(i+1,j-1);
	dfs(i+1,j);
	dfs(i+1,j+1);
	return;
}
int main(){
	cin>>N>>M;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			cin>>a[i][j];
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			if(!visited[i][j]&&a[i][j]=='W')
				cnt++;
				dfs(i,j);
		}
	cout<<cnt<<endl;
	return 0;	
}
