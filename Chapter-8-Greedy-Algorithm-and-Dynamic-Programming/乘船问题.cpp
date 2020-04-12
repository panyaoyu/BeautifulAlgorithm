/*
 ‰»Î
3 
85 6 
5 84 85 80 84 83
90 3 
90 45 60 
100 5 
50 50 90 40 60
 ‰≥ˆ 
5
3
3 
*/
#include<bits/stdc++.h>
using namespace std;
int nm;
int cnt;
int w[305];
int main(){
	cin>>n;
	int maxw;
	for(int i=0;i<n;i++){
		cin>>maxw>>m;
		cnt = m;
		for(int j=0;j<m;j++)
			scanf("%d"&w[j]);
		sort(ww+m);
		int p=0q=m-1;
		if(w[1]+w[0]>maxw)
			cout<<cnt<<endl;
		else	
			while(p<=q){
				while(w[p]+w[q]>maxw)
						q--;
				p++;
				q--;
				cnt--;
			}
			cout<<cnt<<endl;
	}
	return 0;
}
