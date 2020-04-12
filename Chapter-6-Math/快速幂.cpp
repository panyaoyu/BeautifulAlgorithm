#include<iostream>
using namespace std;
typedef long long ll;
ll pow(int a,int b){
	ll res = 1;
	while(b){
		if(b&1)
			res = res*a;
		a = a * a;
		b = b>>1;
	}
	return res; 
}
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}
