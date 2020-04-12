#include<iostream>
using namespace std;
int a[5][5] = {
    {1, 2, 3, 4, 100},
    {5, 6, 7, 0, 101},
    {9, 0, 11, 12, 102},
    {13, 14, 15, 16, 103},
    {104, 105, 106, 107, 103},
};
int row[5];
int col[5];
int main(){
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			if(!a[i][j]){
				row[i] = 1;
				col[j] = 1;
			}
		}
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			if(row[i]||col[j])
				a[i][j] = 0;
		}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			printf("%4d ",a[i][j]);
		cout<<endl;
	}	
	return 0;
}
