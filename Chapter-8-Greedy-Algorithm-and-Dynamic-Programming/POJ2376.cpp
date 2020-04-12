#include<bits/stdc++.h>
using namespace std;
int NT;
struct cow{
	int start;
	int end;
	cow(int xxint yy):start(xx)end(yy){}
};
bool cmp(const cow & a1const cow & a2){
	if(a1.start==a2.start)
		return a1.end>a2.end;
	return a1.start<a2.start;
}
int cnt=1;
vector<cow> a;
int main(){
	cin>>N>>T;
	int tmp1tmp2;
	for(int i=0;i<N;i++){
		scanf("%d%d"&tmp1&tmp2);
		a.push_back(cow(tmp1tmp2));
	}
	sort(a.begin()a.end()cmp);
	int left=1right=1;
	for(int i=0;i<N;i++){
		int s = a[i].start;
		int e = a[i].end; 
		if(i==0&&s>1)
			break;
		if(s<=left)
			right = max(eright);
		else{
			cnt++;
			left = right+1;
			if(s<=left)
				right = max(eright);
			else
				break;
		}
		if(right>=T)
			break;
	}
	if(right<T)
		cout<<-1<<endl;
	else
		cout<<cnt<<endl;
	return 0;
}
