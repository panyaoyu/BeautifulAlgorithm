//旋转数组的最小数字(改造二分法) 
#include<iostream>
using namespace std;
int search(int*a,int len){
	int begin = 0,end = len-1;
	int mid;
	while(end!=begin+1){
		mid = begin + (end-begin)/2;
		if(a[begin]<a[mid]){
			begin = mid;
		}
		else{
			end = mid;
		}
	}
	return a[end];
}
int main(){
	int a[] = {7,8,1,2,3,4,5,6};
	cout<<search(a,8)<<endl;
	return 0 ;
}
