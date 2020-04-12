/*
输入：

005300000
800000020
070010500
400005300
010070006
003200080
060500009
004000030
000009700

程序应该输出：

145327698
839654127
672918543
496185372
218473956
753296481
367542819
984761235
521839764

再例如，输入：

800000000
003600000
070090200
050007000
000045700
000100030
001000068
008500010
090000400

程序应该输出：

812753649
943682175
675491283
154237896
369845721
287169534
521974368
438526917
796318452
*/
#include<bits/stdc++.h>
using namespace std;
int a[9][9];
//n为第n/9行第n%9列
bool judge(int n,int i){
	for(int j=0;j<9;j++){
		if(a[n/9][j] == i)
			return false;
		if(a[j][n%9] == i)
			return false;
	}
	int row = (n/9)/3*3;
	int col = n%9/3*3;
	for(int b=row;b<=row+2;b++)		
		for(int c=col;c<=col+2;c++){
			if (a[b][c]==i)
				return false;
		}
	return true;
} 
void dfs(int n){
	if(n==81){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++)
				cout<<a[i][j];
			cout<<endl; 
		}
		exit(0);
	}
	if(a[n/9][n%9])
		dfs(n+1);
	else
		for(int i=1;i<=9;i++){
			if(judge(n,i)){
				a[n/9][n%9] = i;
				dfs(n+1);
				a[n/9][n%9] = 0;
			}			
		} 
} 
int main(){
	char temp;
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++){
			cin>>temp;
			a[i][j] = temp-'0';
		}
	dfs(0);
	return 0;
} 
