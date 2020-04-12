/*
 ‰»Î
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16 
 ‰≥ˆ 
 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/
#include<iostream>
using namespace std;
int n;
int a[100][100]={0};
int visited[100][100]={0};
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		} 
	int row=0,col=0;
	printf("%d ",a[row][col]);
	visited[row][col] = 1;
	while(!visited[row][col+1]){
		while(col+1<n&&!visited[row][col+1]){
			visited[row][++col] = 1;
			printf("%d ",a[row][col]);
		}
		while(row+1<n&&!visited[row+1][col]){
			visited[++row][col] = 1;
			printf("%d ",a[row][col]);
		}
		while(col-1>=0&&!visited[row][col-1]){
			visited[row][--col] = 1;
			printf("%d ",a[row][col]);
		}
		while(row-1>=0&&!visited[row-1][col]){
			visited[--row][col] = 1;
			printf("%d ",a[row][col]);
		}
	}
	return 0;
}
