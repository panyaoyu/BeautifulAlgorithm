/*
输入
6
输出 
1 4 3 2 5 6
1 6 5 2 3 4
*/ 
#include<bits/stdc++.h>
using namespace std;
int n;
int isPrime[32] = {1,1};
vector<int> a;
int visited[16] = {0};
void dfs(int k){
	if(k==n){
		if(!isPrime[1+a[n-1]]){
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
		return;
	}
	for(int i=2;i<=n;i++){
		if(!visited[i]&&!isPrime[i+a[k-1]]){
			visited[i] = 1;
			a.push_back(i);
			dfs(k+1);
			visited[i] = 0;
			a.pop_back();
		}
	}
	return ;
}
//欧拉筛求素数 
void getprime(){
	vector<int> prime;
	int cnt=0;
	for(int i=2;i<2*n;i++){
		if(!isPrime[i]){
			cnt++;			
			prime.push_back(i);
		}
		for(int j=0;j<cnt&&i*prime[j]<2*n;j++){
			isPrime[i*prime[j]] = 1;
			if(!i%prime[j])
				break;
		}
	} 
//	打印求得的素数 
//	int a=prime.size();
//    for (int i=0;i<a;i++)
//        cout<<prime[i]<<endl;
}
int main(){
	cin>>n;
	getprime();
	a.push_back(1);
	dfs(1);
	return 0;
} 
