#include<iostream>
using namespace std;
int a[] = {1, 2, 5, 4, 6, 8, 7};
int len =7;
int main(){
	int i=0,j=len-1;
	while(i<j){
		while(!(a[j]&1)&&i<j)
			j--;
		while((a[i]&1)&&i<j)
			i++;
		if(i<j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	for(int i=0;i<len;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
