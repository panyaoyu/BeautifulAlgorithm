#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
ll a[2][2] = {{0,1},{1,1}};
ll res[2][2] = {{1,0},{0,1}};
void matrixpow(ll b){
	ll copy[2][2];
	while(b){
		if(b&1){
			memcpy(copy,res,sizeof(copy));
			for(int i=0;i<2;i++)
				for(int j=0;j<2;j++){
					res[i][j] = 0;
					for(int k=0;k<2;k++)
					res[i][j] += copy[i][k]*a[k][j];
				}
		}
		memcpy(copy,a,sizeof(copy));
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++){
				a[i][j] = 0;
				for(int k=0;k<2;k++)
					a[i][j] += copy[i][k]*copy[k][j];
			}
		b = b>>1;
	}
}
int main(){
	ll n;
	cin>>n;
	matrixpow(n-1);
	cout<<res[1][1]<<endl;
}
