/*
 ‰»Î
5
1 3
2 4
3 3
4 1
5 4
10 
 ‰≥ˆ 
*/ 
#include<bits/stdc++.h>
using namespace std;
int n;
int c;
double total=0;
struct obj{
	int w;
	int v;
	obj(int wwint vv):w(ww)v(vv){}
};
vector<obj> a;
bool cmp(const obj & a1const obj & a2){
	return double(a1.v)/a1.w>double(a2.v)/a2.w;
}
int main(){
	cin>>n;
	int tmp1tmp2;
	for(int i=0;i<n;i++){
		scanf("%d%d"&tmp1&tmp2);
		a.push_back(obj(tmp1tmp2));
	}
	cin>>c;
	sort(a.begin()a.end()cmp);
	for(int i=0;i<n;i++){
		if (c-a[i].w>=0){
			c -= a[i].w; 
			total += a[i].v;
		}
		else{
			total += c*(double)(a[i].v)/a[i].w;
			break;
		}
	}
	cout<<total<<endl;
	return 0;
}
