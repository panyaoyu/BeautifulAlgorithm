#include<iostream>
typedef long long ll;
using namespace std;
ll x,y;
ll extgcd(ll a,ll b){
	if(!b){
		x = 1;y = 0;
		return a;
	}
	int res = extgcd(b,a%b);
	int temp;
	temp = y;
	y = x - a/b*y;
	x = temp;
	return res;
}
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<extgcd(a,b)<<endl;
	cout<<x<<" "<<y<<endl;
	return 0;
} 
