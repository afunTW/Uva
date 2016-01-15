#include<iostream>
#include<sstream>
#define toDigit(c) (c-'0')
using namespace std;

bool is9degree(string &str){
	int nextdegree=0;
	
	for(int i = 0 ; i < str.size(); i++){
		nextdegree += toDigit(str[i]);
	}
	
	if(nextdegree % 9 == 0){
		stringstream ss;
		ss << nextdegree;
		str = ss.str();
		return true;
	}else{
		return false;
	}
}

int main(){
	string n;

	// for each input
	while(cin>>n && n!="0"){
		int degree = 0;
		bool ninedegree = false;
		string ntest = n;
		stringstream ss;

		// for each degree
		while(is9degree(ntest)){
			ninedegree=true;
			degree++;
			if(ntest.size() == 1){
				break;
			}
		}
		ss << degree;
		cout<<n<<(ninedegree ? " is a multiple of 9 and has 9-degree "+ss.str() : " is not a multiple of 9")<<"."<<endl;
	}
}
