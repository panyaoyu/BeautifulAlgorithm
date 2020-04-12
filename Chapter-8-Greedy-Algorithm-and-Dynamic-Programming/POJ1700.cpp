/*
POJ-1700
Sample Input
1
4
1 2 5 10
Sample Output
17
*/
//#include<bits/stdc++.h>
//int n,m;
//int A[1005];
//using namespace std;
//int f(int m){
//	if(m==2)
//		return A[1];
//	if(m==3)
//		return A[0]+A[1]+A[2];
//	int sum = 0;
//	for(int i=1;i<m;i++)
//		sum+=A[i];
//	return min(sum+A[0]*(m-2),2*A[1]+A[0]+A[m-1]+f(m-2)); 
//}
//int main(){
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>m;
//		for(int j=0;j<m;j++)
//			scanf("%d",&A[j]);
//		sort(A,A+m);
//		cout<<f(m)<<endl;
//	}
//	return 0 ;
//}
#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> A;
int f(int m){
	if(m==1)
		return A[0];
	if(m==2)
		return A[1];
	if(m==3)
		return A[0]+A[1]+A[2];
	int sum = 0;
	for(int i=1;i<m;i++)
		sum+=A[i];
	return min(sum+A[0]*(m-2),2*A[1]+A[0]+A[m-1]+f(m-2)); 
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		int tmp;
		for(int j=0;j<m;j++){
			scanf("%d",&tmp);
			A.push_back(tmp);
		}
		sort(A.begin(),A.end());
		cout<<f(m)<<endl;
		A.clear();
	}
	return 0 ;
}
