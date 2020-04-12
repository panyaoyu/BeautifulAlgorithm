/*
INPUT 
2
1000 53
87 123456789
OUTPUT 
7922
6060
*/
#include<iostream>
using namespace std;
typedef long long ll;
ll T,n,B;
ll x,y;
ll extgcd(ll a,ll b){
	if(b==0){
		x = 1;y = 0;
		return a;
	}
	ll res = extgcd(b,a%b);
	ll temp = y;
	y = x - a/b*y;
	x = temp;
	return res;
}
int main(){
	cin>>T;
	for(int i=0;i<T;i++){	
		cin>>n>>B;
		ll res = extgcd(B,9973);
		cout<<(x * n % 9973+9973)%9973<<endl;
	}
	return 0;
}
