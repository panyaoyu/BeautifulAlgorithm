//�����������
/*7-3 ��������������� ��20 �֣�
����һ��˳��洢�����Ա������һ���㷨���Ҹ����Ա�������������������С����磬(1,9,2,5,7,3,4,6,8,0)��
��ĵ���������Ϊ(3,4,6,8)��
����������
15
1 9 2 5 7 3 4 6 8 0 11 15 17 17 10
���������
3 4 6 8
����: DS�γ���
��λ: �㽭��ѧ
ʱ������: 400 ms
�ڴ�����: 64 MB
���볤������: 16 KB*/
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
        right=i+1;//right��ǵ�ǰԪ��a[i]��ǰһ��Ԫ��a[i+1] 
        if(a[i+1]>a[i])//�ж��Ƿ���� ���ǵĻ�count++ 
        {
            count++; 
            if(count>max)/*�ж���������Ԫ�ظ����Ƿ��max�� ��
           �ǵĻ���ǵ������п�ʼ�ĵ�һ���±�*/
            {
                 max=count;
                 flagstart=left;
            }     
        }
        else//���a[i+1]<=a[i] 
        {
            count=0;//��count =0��leftָ�� a[i+1]���±� 
            left=right;
        }
    } 
//  cout<<"max="<<max<<endl;
//  cout<<"flagstart="<<flagstart<<endl; 
    for(i=flagstart;i<=flagstart+max-1;i++)
        cout<<a[i]<<" ";
    cout<<a[i]<<endl;
}
