#include<iostream>
using namespace std;
int a[] =  {4,2,10000,5,8,3,9,1,10,11};
int len = 10;
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
int find(int left,int right){
	if(left>right)
		return left+1;
	int mid = left+(right-left)/2;
	int q = selectK(left,right,mid-left+1);
	if(q==mid+1) 
		return find(mid+1,right);
	return find(left,mid-1);
}
int main(){
	cout<<find(0,len-1)<<endl; 
	return 0;
}
