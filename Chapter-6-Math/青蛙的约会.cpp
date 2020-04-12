/*
INPUT
1 2 3 4 5
OUTPUT
4 
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
ll k1,k2;
ll extgcd(int a,int b){
	if(b==0){
		k1 = 1;k2 = 0;
		return a;
	}
	ll res = extgcd(b,a%b);
	ll temp = k2;
	k2 = k1 - a/b*k2;
	k1 = temp;
	return res;
}
ll x,y,m,n,L; 
int main(){
	cin>>x>>y>>m>>n>>L;
	ll res = extgcd((n-m),L);
	if((x-y)%res)
		cout<<"Impossible"<<endl;
	else{
		ll r = L/res;
		cout<<(k1*(x-y)/res%r+abs(r))%abs(r)<<endl;
	}
	return 0;
} 
