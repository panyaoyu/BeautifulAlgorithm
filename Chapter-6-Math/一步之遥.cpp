/*
Ò»²½Ö®Ò£
97x-127y=1 
*/ 
#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
ll x,y;
ll extgcd(ll a,ll b){
	if(!b){
		x = 1;y =0;
		return a;
	}
	int res = extgcd(b,a%b);
	int temp = y;
	y = x - a/b*y;
	x = temp;
	return res;
}
int main(){
	ll a = 97,b=127;
	ll tmp = extgcd(a,b);
	cout<<abs(x)+abs(y)<<endl;
	return 0;
}
