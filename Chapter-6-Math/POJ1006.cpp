/*
INPUT
0 0 0 0
0 0 0 100
5 20 34 325
4 5 6 7
283 102 23 320
203 301 203 40
-1 -1 -1 -1
OUTPUT
Case 1: the next triple peak occurs in 21252 days.
Case 2: the next triple peak occurs in 21152 days.
Case 3: the next triple peak occurs in 19575 days.
Case 4: the next triple peak occurs in 16994 days.
Case 5: the next triple peak occurs in 8910 days.
Case 6: the next triple peak occurs in 10789 days.
*/
#include<iostream> 
using namespace std;
int p,e,i,d;
int main(){
	int number = 1 ;
	int n1,n2,n3;
	while(true){
		cin>>p>>e>>i>>d;
		if(p==-1&&e==-1&i==-1&d==-1)
			exit(0);
		p = p%23;
		e = e%28;
		i = i%33;
		for(int k=1;;k++){
			if(k*28*33%23==p){
				n1 = k*28*33;
				break;
			}
		}
		for(int k=1;;k++){
			if(k*23*33%28==e){
				n2 = k*23*33;
				break;
			}
		}
		for(int k=1;;k++){
			if(k*23*28%33==i){
				n3 = k*23*28;
				break;
			}
		}
		cout<<"Case "<<number
			<<": the next triple peak occurs in "
			<<(n1+n2+n3-d-1)%21252+1<<" days."<<endl;
//		int j = d+1;
//		while(true){
//			if((j-p)%23==0&&(j-e)%28==0&&(j-i)%33==0){
//				cout<<"Case "<<number
//							<<": the next triple peak occurs in "
//							<<j-d<<" days."<<endl;
//				break;
//			}
//			j++;
//		}
		number++;
	}
	return 0;
}




