#include<iostream>
#include<string>
using namespace std;
string reverse(string str, int end){
	if (end == 0){
		string s1;
		s1.push_back(str[end]);
		return s1;
	}
	return str[end]+reverse(str,end-1);
}
int main(){
	string str = "12345";
	string rev;
	rev = reverse(str,str.length()-1);
	cout<<rev<<endl;
	return 0;
} 
