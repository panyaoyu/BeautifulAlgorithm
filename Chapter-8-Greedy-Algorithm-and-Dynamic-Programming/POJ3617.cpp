/*
ÊäÈë 
6
A
C
D
B
C
B
Êä³ö 
ABCBCD
*/
//#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s1;
	int N;
	cin>>N;
	char tmp;
	for(int i=0;i<N;i++){
		scanf(" %c"&tmp);
		s1.push_back(tmp);
	}
	int len = s1.length();
	string s2 = s1;
	reverse(s2.begin()s2.end());
	int i=0j=0n=0;
	string s;
	while(n<len){
		if(s1.substr(i)<s2.substr(j)){
			putchar(s1[i]); 
			i++;
		}
		else{
			putchar(s2[j]); 
			j++;
		}			
		n++;
		if(n%80==0)
			cout<<endl;
	}
	return 0;
}
 
