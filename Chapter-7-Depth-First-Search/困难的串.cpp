/*
 ‰»Î
7 3
30 3
 ‰≥ˆ
ABACABA
ABACABCACBABCABACABCACBACABA
*/
#include<bits/stdc++.h>
using namespace std; 
int n,L,cnt=0;
string s ="";
bool check(char c){
	int cnt1 = 1;
	for(int i = s.length()-1;i>=0;i-=2){
		string s1 = s.substr(i,cnt1);
		string s2 = s.substr(i+cnt1);
		s2.push_back(c);
		if(s1 == s2)
			return false;
		cnt1++;
	}
	return true;
}
void dfs(int k){
	if(cnt==n){
		cout<<s<<endl;
		exit(0);	
	}
	for(char i='A';i<'A'+L;i++){
		if(check(i)){
			cnt++;
			s.push_back(i);
			dfs(k+1);
			s.pop_back(); 
		}
	}				
}
int main(){
	cin>>n>>L;
	dfs(0);
	return 0; 
} 
