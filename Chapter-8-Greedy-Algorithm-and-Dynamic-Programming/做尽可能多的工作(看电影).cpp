/*
ÊäÈë
5
1 3 1 6 8
3 5 2 9 10
Êä³ö
3 
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int b[100005];
int cnt = 0;
struct work{
	int start;
	int end;
	work(int xxint yy):start(xx)end(yy){}
};
bool cmp(const work & a1const work & a2){
	return a1.end<a2.end;
}
vector<work> wo;
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d"&a[i]);
	for(int i=0;i<n;i++)
		scanf("%d"&b[i]);
	for(int i=0;i<n;i++)
		wo.push_back(work(a[i]b[i]));
	sort(wo.begin()wo.end()cmp);
	int i=0;
	cnt++; 
	int tmp = 0;
		for(int j=i+1;j<n;j++){
			if(wo[j].start>wo[tmp].end){
				cnt ++;
				tmp = j;
			}
		}
	cout<<cnt<<endl;
	return 0;
} 
