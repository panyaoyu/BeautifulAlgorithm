//在有空字符串的有序字符串数组中查找
#include<iostream>
#include<string>
using namespace std;
int index(const string* s,string b){
	int begin = 0,end = 7;
	int mid;
	while(begin<=end){
		mid = begin+(end-begin)/2;
		while (s[mid]==""){
			mid++;
			if(mid>end)
				return -1;
		}
		if (b>s[mid]){
			begin = mid+1;
		}
		else if(b<s[mid]){
			end = mid-1;
		}
		else{
			return mid;
		}
	}
	return -1;
} 
int main(){
	string str[] = {"a","","ac","","ad","b","","ba"};
	cout<<index(str,"acf")<<endl;
	return 0;
}
