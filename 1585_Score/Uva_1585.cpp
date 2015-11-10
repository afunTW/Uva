#include<iostream>
#include<cstring>

using namespace std;

void getScore(char *status, int *score){
  bool pre = (*(status-1) == 'O' ? true:false);
  bool curr = (*(status) == 'O' ? true:false);

  if(!curr){
    *score = 0;
  }else if(!pre){
    *score = 1;
  }else{
    *score = *(score-1)+1;
  }
}

int main(){
  int n;

  // remember to flush the cin queue
  cin >> n;
  cin.ignore();
  
  for(int i = 0; i<n; i++){ 
    int score[80]={0};
    int total=0;
    char status[80];
   
    cin.getline(status, 80);
    
    for(int j = 0 ; j < (int)strlen(status) ; j++){
      getScore(&status[j], &score[j]);
    }

    for(int j = 0 ; j < (int)strlen(status) ; j++){
      total += score[j];
      if(j == (int)strlen(status)-1){
        cout<<total<<endl;
      }
    }
  }
}
