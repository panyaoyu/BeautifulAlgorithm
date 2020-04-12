/*
ÊäÈë 
3 2 1 3 0 2
620
Êä³ö
6
*/
#include<bits/stdc++.h>
int a[6] = {1,5,10,50,100,500};
int number[6];
int cnt = 0;
using namespace std;
int main(){
	int m;
	for(int i=0;i<6;i++)
		scanf("%d",&number[i]);
	cin>>m;
	int i=5;
	while(m){
		if(i<0)
			break;
		if(m>=a[i]*number[i]){
			m -= a[i]*number[i];
			cnt += number[i];
		}
		else{
			int temp = m/a[i];
			m -= temp*a[i];
			cnt += temp;
		}
		i--;
	}
	cout<<cnt<<endl;
	return 0;
}
