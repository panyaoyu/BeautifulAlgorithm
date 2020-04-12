//最长递增子序列
/*7-3 最长连续递增子序列 （20 分）
给定一个顺序存储的线性表，请设计一个算法查找该线性表中最长的连续递增子序列。例如，(1,9,2,5,7,3,4,6,8,0)中
最长的递增子序列为(3,4,6,8)。
输入样例：
15
1 9 2 5 7 3 4 6 8 0 11 15 17 17 10
输出样例：
3 4 6 8
作者: DS课程组
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB*/
#include<iostream>
using namespace std;
int a[100010];
void Longest_continuous_increasing_subsequence(int a[],int N) ;
int main()
{
    int N;
    scanf("%d",&N);
    int i=0;
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);
    Longest_continuous_increasing_subsequence(a,N);
    return 0;
}
void Longest_continuous_increasing_subsequence(int a[],int N)
{
    int max=0,count=0,i;
    int flagstart=0,left=0,right=0; 
    for(i=0;i<N;i++) 
    {
        right=i+1;//right标记当前元素a[i]的前一个元素a[i+1] 
        if(a[i+1]>a[i])//判断是否递增 ，是的话count++ 
        {
            count++; 
            if(count>max)/*判断连续递增元素个数是否比max大 ，
           是的话标记递增序列开始的第一个下标*/
            {
                 max=count;
                 flagstart=left;
            }     
        }
        else//如果a[i+1]<=a[i] 
        {
            count=0;//令count =0，left指向 a[i+1]的下标 
            left=right;
        }
    } 
//  cout<<"max="<<max<<endl;
//  cout<<"flagstart="<<flagstart<<endl; 
    for(i=flagstart;i<=flagstart+max-1;i++)
        cout<<a[i]<<" ";
    cout<<a[i]<<endl;
}
