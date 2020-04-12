#include<iostream>
using namespace std;
int row =4,col = 4;
int a[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
     {13, 14, 15, 16},};
int main(){
	int i=0,j=0;
	int flag = 1;
	while(true){
		cout<<a[i][j]<<" ";
		if(i==row-1&&j==col-1){
			break;
		}	
		if(flag>0){
			if(j==0||i==row-1){
				flag *= -1;
				if(i+1<=row-1)
					i++;
				else j++;
			}
			else{
				i++;j--;
			}
		}
		else{
			if(i==0||j==col-1){
				flag *= -1;
				if(j+1<=col-1)
					j++;
				else i++;
			}
			else{
				i--;j++;
			}
		}
	}
	return 0;
}
