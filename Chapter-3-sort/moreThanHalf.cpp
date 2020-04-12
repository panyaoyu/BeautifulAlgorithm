#include<iostream>
using namespace std;
int a[] = {2,4,2,5,7,2,6,2,9,2,11,2,5,2};
int len = 14;
int moreThanHalf(){
	int nTimes = 0;
	int candidate;
	int cnt = 0;
	for(int i=0;i<len;i++){
		if(a[i]==a[len-1])
			cnt++;
		if(!nTimes){
			candidate = a[i];
			nTimes++;
		}
		else if(a[i]==a[i-1])
			nTimes++;
		else
			nTimes--;
	}	
	if(cnt = len/2)
		return a[len-1];
	return candidate;	
}
int main(){
	cout<<moreThanHalf()<<endl;
	return 0;  
} 
