#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main(){
	int n = 100002;
	int num = n;
	while(num/log(num)<n){
		num++;
	}
	num += 10000;
	bool* isPrime = new bool[num];
	memset(isPrime,0,sizeof(isPrime));
	vector<int> prime;
	int cnt = 0;
	for(int i=2;i<num;i++){
		if(!isPrime[i]){
			prime.push_back(i);
			cnt++;
			if(cnt==100002)
				break;
		}
		for(int j=0;i*prime[j]<=num&&j<cnt;j++){
			isPrime[i*prime[j]] = true;
			if(i%prime[j]==0)
				break;
			}
	}
	cout<<prime[prime.size()-1]<<endl;
	return 0;
}
