//µ›πÈ∑®≤Â»Î≈≈–Ú
#include<iostream>
using namespace std;
void insert_sort(int* a,int len){
	if(len==0)
		return;
	insert_sort(a,len-1);
	int tmp = a[len];
	int index = len-1;
	while(tmp<a[index]&&index>=0){
		a[index+1]=a[index];
		index--;
	}
	a[index+1] = tmp; 
} 
int main(){
	int a[]={0,2,3,4,8,6,5,7,1};
	insert_sort(a,8);
	for(int i=1;i<=8;i++)
		cout<<a[i]<<" ";
	return 0;
} 
