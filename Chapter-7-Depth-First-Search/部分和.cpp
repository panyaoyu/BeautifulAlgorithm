/*
ÊäÈë
4
1 2 4 7 
13 
Êä³ö 
yes 2 4 7 
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int a[25];
vector<int> temp;
void dfs(int m,int v){
	if(v==0){
		cout<<"yes"<<" ";
		int len = temp.size();
		for(int i=0;i<len;i++){
			cout<<temp[i]<<" ";
		}
		exit(0);
	}
	if(m==n)
		return; 
	temp.push_back(a[m]);
	dfs(m+1,v-a[m]);
	temp.pop_back();
	dfs(m+1,v);
} 
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	dfs(0,k);
	cout<<"no"<<endl;
	return 0;
}
