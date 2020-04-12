/*
ÊäÈë
5
3 7 3
8 10 3
6 8 1
1 3 1
10 11 1
Êä³ö
6 
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int cnt_all = 0;
int visited[50005]={0};
int c[50005] = {0};
struct interval{
	int start;
	int end;
	int cnt;
	interval(int xxint yyint cc):start(xx)end(yy)cnt(cc){}
}; 
bool cmp(const interval & a1const interval & a2){
	return a1.end<a2.end ;
}
vector<interval> a;
int main(){
	cin>>n;
	int tmp1tmp2tmp3;
	for(int i=0;i<n;i++){
		scanf("%d%d%d"&tmp1&tmp2&tmp3);
		a.push_back(interval(tmp1tmp2tmp3));
	}
	sort(a.begin()a.end()cmp);
	for(int i=0;i<n;i++){
		while(a[i].cnt){
			int tmp = a[i].end;
			while(visited[tmp]){
				tmp--;
			}	
			visited[tmp] = 1;
			cnt_all++;
			a[i].cnt--; 
			for(int j=i+1;j<n;j++){
				if(tmp>=a[j].start&&tmp<=a[j].end&&a[j].cnt)
					a[j].cnt--;
			}
		}
	}
	cout<<cnt_all<<endl;
	return 0;
} 
