//����k�������1�� 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string dectok(int n, int k){
	string str = "";
	while(n>0){
		str += n%k+'0';
		n /= k;
	}
	reverse(str.begin(),str.end());
	return str;
}
int ktodec(string n,int k){
	int dec = 0;
	for(int i=0;i<n.size();i++){
		dec += (n[i]-'0')*pow(k,n.size()-i-1); 
	}
	return dec;
}
int main(){
	int k = 3;
	int arr[16]={2,2,2,9,7,7,7,3,3,3,6,6,6,0,0,0};
	string str[sizeof(arr)/sizeof(arr[0])];
	cout<<"��ӡ���飺" ;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int maxlen=0,tmp; 
	//��ʮ������תΪk���ƣ�������k�����ַ�����󳤶� 
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		str[i]=dectok(arr[i],k);
		tmp = str[i].size();
		maxlen=max(tmp,maxlen);
	}
	//�������ַ�������һ���ĳ��ȣ�������в���λ�ӷ� 
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		while(str[i].size()<maxlen){
			str[i]="0"+str[i];
		}
	}
	string result="";
	while(result.size()<maxlen){
		result+="0";
	}
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		for(int j=0;j<maxlen;j++){
			result[j]=char(((str[i][j]-'0')+(result[j]-'0'))%k+'0');
		}
	} 
	cout<<"����1�ε���Ϊ"<<ktodec(result,k)<<endl;
	return 0; 
}
