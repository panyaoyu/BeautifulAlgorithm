#include<iostream> 
using namespace std;
int a[]={2,3,4,8,6,5,7,1};
int len=8;
void adjust(int i,int n){
	int left = 2*i+1;
	int right = 2*i+2;
	if(left>=n){
		return;
	}
	int min;
	if(right>=n)
		min = left;
	else if(a[left]<=a[right])
		min = left;
	else
		min = right;
	if(a[i]<=a[min])
		return;
	int temp = a[i];
	a[i] = a[min];
	a[min] = temp;
	adjust(min,n); 
}
void makeMinHeap(){
	for(int i=len/2-1;i>=0;i--)
		adjust(i,len);
}
void heapSort(){
	makeMinHeap();
	for(int i=len-1;i>0;i--){
		int temp = a[i];
		a[i] = a[0];
		a[0] = temp;
		adjust(0,i);
	}
}
int main(){
	heapSort();
	for(int i=len-1;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
} 
