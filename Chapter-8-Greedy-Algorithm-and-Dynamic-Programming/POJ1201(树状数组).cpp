/*
ÊäÈë
5
3 7 3
8 10 3
6 8 1
1 3 1
10 11 1
Êä³ö
6 1
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int cnt_all = 0;
int visited[50005] = {0};
int c[50005] = {0};

int lowbit(int n){
	return n&(-n);
}

void update(int xint yint max){
	for(int i=x;i<=max;i+=lowbit(i))
		c[i] += y;
}

int getSum(int x){
	int ans = 0;
	for(int i=x;i;i-=lowbit(i)) 
		ans+=c[i];
	return ans;
} 

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
	int max = a[n-1].end;
	for(int i=0;i<n;i++){
		int cnt1 = getSum(a[i].end)-getSum(a[i].start)+visited[a[i].start];
		a[i].cnt -=cnt1;
		while(a[i].cnt>0){
			int tmp = a[i].end;
			while(visited[tmp])
				tmp--;
			visited[tmp] = 1;
			cnt_all++;
			a[i].cnt--;
			update(tmp1max);
		}
	}
	cout<<cnt_all<<endl;
	return 0;
} 
