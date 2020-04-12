#include<iostream>
using namespace std;
int a[]={2,3,4,8,6,5,7,1},b[8];
int len=8;
void merge(int left,int mid,int right){
	int b[100];
	int k=0;
	int i=left,j=mid+1;
	while((i<=mid)&&(j<=right)){
		if(a[i]>a[j])
			b[k++] = a[j++];
		else
			b[k++] = a[i++];
	}
	while(i<=mid)
		b[k++] = a[i++];
	while(j<=right)
		b[k++] = a[j++];
	for(int m=0,n=left;m<right-left+1;m++,n++)
		a[n] = b[m];
}
void merge_sort(int left,int right){
	if(left == right)
		return;
	int mid = left+((right-left)>>1); 
	merge_sort(left,mid);
	merge_sort(mid+1,right);
	merge(left,mid,right);
	return;
}
int main(){
	merge_sort(0,len-1);
	for(int i=0;i<len;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
