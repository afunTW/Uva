#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<bool> getPrimeArr(unsigned int N){
	
	// init
	vector<bool> result;
	for(int i = 0 ; i<N+1 ; ++i){
		result.push_back(true);
	}

	// pick prime number
	for(int i=2; i*i < N ; ++i){
		for(int j=3 ; j < N+1 ; ++j){
			if(!(j%i) && j!=i){
				result[j] = false;
			}
		}
	}

	// special case of 2 is prime
	result[0] = false;
	result[1] = true;
	result[2] = true;

	return result;
}

int main(){
	vector<bool> primeArr = getPrimeArr(1000);
	int N=0, C=0;
	while(cin>>N>>C){

		// get the prime list based on input value
		vector<int> primeList;
		for(int i = 0 ; i<N+1 ; ++i){
			if(primeArr[i]){
				primeList.push_back(i);
			}
		}
		
		// print format
		int start = (!(primeList.size()%2)?(primeList.size()/2-C+1):((primeList.size()/2+1)-C+1));
		int end = (!(primeList.size()%2)?(primeList.size()/2+C):((primeList.size()/2+1)+C-1));
		start = (start<0?0:start-1);
		end = (end>primeList.size()?primeList.size():end);

		cout<<N<<" "<<C<<":";
		for(int i = start; i<end ; i++){
			cout<<" "<<primeList[i];
		}
		cout<<endl;
	}
	return 0;
}
