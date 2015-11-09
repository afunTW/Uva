#include<iostream>
#include<cstring>

using namespace std;

const int MAX_LENGTH = 101;
char sen_m[MAX_LENGTH][MAX_LENGTH];

int main(){
  int row_bound = 0, col_bound = 0;

  // store value to matrix and count the limit of row and col for output
  while(cin.getline(sen_m[row_bound], MAX_LENGTH)){
    int slen = (int)strlen(sen_m[row_bound]);
    if(slen == 0){
      break;
    }

    col_bound = max(col_bound, slen);
    row_bound++;
  }

  // output rotating matrix
  for(int i = 0; i< col_bound; i++){
    for(int j = row_bound - 1 ; j >= 0 ; j--){
      cout<<((int)strlen(sen_m[j]) <= i ? ' ':  sen_m[j][i]);
    }
    cout<<endl;
  }
  return 0;
}
