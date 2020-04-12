//Ωªªª≈≈–Ú
#include<iostream>
using namespace std;
int a[]={2,3,4,8,6,5,7,1},b[8];
int len=8;
//√∞≈›≈≈–Ú
void swap(int&a,int&b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
} 
void bubble_sort(int*a,int len){
	for(int i=0;i<len-1;i++)
		for(int j=1;j<len-i;j++){
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
	}
}	 
//øÏÀŸ≈≈–Ú 
void quick_sort1(int left,int right){
	int i,j;
	if (left>right)
		return;
	i=left;
	j=right;
	while(i!=j){
		while(a[j]>=a[left]&&i<j)
			j--;
		while(a[i]<=a[left]&&i<j)
			i++;
		if(i<j)
			swap(a[i],a[j]);
	}
	swap(a[left],a[i]);
	quick_sort1(left,i-1);
	quick_sort1(i+1,right);
	return;
}
void quick_sort2(int left,int right){
	if (left>right)
		return;
	int i=left+1,j=right-left;
	while(i<=j){
		if(a[i]<=a[left])
			i++;
		else{
			swap(a[i],a[j]);
			j--;
		}
	}
	swap(a[left],a[j]);
	quick_sort1(left,j-1);
	quick_sort1(j+1,right);
	return;
} 
int main(){
//	bubble_sort(a,8);
//		for(int i=0;i<len;i++){
//			printf("%d ",a[i]);
//	}
//	printf("\n");
	quick_sort2(0,len-1);
		for(int i=0;i<len;i++){
			printf("%d ",a[i]);
	}
	return 0;
}

