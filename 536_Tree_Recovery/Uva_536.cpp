#include<iostream>
using namespace std;

void traceTree(string &preord, string &inord, string &postord){
	if(preord.size()){
		string preLeft, preRight, inLeft, inRight;
		char root = preord[0];
		int inordRoot = inord.find(root);

		inLeft = inord.substr(0, inordRoot);
		inRight = inord.substr(inordRoot+1);
		preLeft = preord.substr(1, inLeft.size());
		preRight = preord.substr(inLeft.size()+1);

		traceTree(preLeft,inLeft, postord);
		traceTree(preRight, inRight, postord);

		postord+=root;
	}
}

int main(){
	string preord, inord;
	while(cin>>preord>>inord){
		string postord = "";
		traceTree(preord, inord, postord);
		cout<<postord<<endl;
	}
	return 0;
}
