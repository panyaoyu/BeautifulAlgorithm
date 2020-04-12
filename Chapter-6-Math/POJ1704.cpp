/*
 ‰»Î 
2
3
1 2 3
8
1 5 6 7 9 12 14 17
 ‰≥ˆ 
Bob will win
Georgia will win
*/
//#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int T,N;
int a[1005];
int main(){
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>N;
		for(int j=0;j<N;j++)
			scanf("%d",&a[j]);
		sort(a,a+N);
		int res;
		if(N%2){
			res = a[0]-1;
			for(int j=1;j<N;j+=2)
				res = res^(a[j+1]-a[j]-1);
		}	
		else{
			res = 0;
			for(int j=0;j<N;j+=2)
				res = res^(a[j+1]-a[j]-1);
		}	
		if(res)
			cout<<"Georgia will win"<<endl;
		else
			cout<<"Bob will win"<<endl;
	}
	return 0;
} 
