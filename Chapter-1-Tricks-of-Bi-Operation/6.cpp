//0~1之间浮点实数的二进制表示
#include<iostream>
#include<string> 
#include<cstring>
using namespace std;
int main(){
	double n = 0.3;
	string str="0.";
	bool flag = true;
	while(n>0){
		n*=2;
		if(n>=1){
			str.append("1");
			n = n-1;
		}
		else
			str.append("0");
		if(str.size()>34){
			cout<<"ERROR";
			flag = false;
			break;
		}
	}
	if(flag)
		cout<<str<<endl;
} 
