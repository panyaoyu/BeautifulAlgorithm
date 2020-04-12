#include<iostream>
using namespace std;
int a[] = {3, 9, 7, 6, 1, 2};
int len = 6;
int selectK(int left,int right,int k){
	if(left>right)
		return -1;
	int i=left,j=right;
	while(i<j){
		while(a[left]<=a[j]&&i<j)
			j--;
		while(a[left]>=a[i]&&i<j)
			i++;
		if(i<j){
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	int temp = a[i];
	a[i] = a[left];
	a[left] = temp;
	int kk = i-left+1; 
	if(k==kk)
		return a[i];
	if(kk>k)
		return selectK(left,i-1,k);
	return selectK(i+1,right,k-kk);	
}
int main(){
	int k;
	cin>>k;
	cout<<selectK(0,len-1,k)<<endl;
	return 0;
}
