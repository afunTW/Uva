#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
  int n;

  scanf("%d", &n);
  
  for(int i = 0; i<n; i++){ 
    string status;
    cin >> status;

    int pre=0, now=0, total=0;
    for(int j = 0 ; j<status.length() && j<80 ; j++){
      if(status[j] == 'O'){
        now = ++pre;
	total += now;
      }else{
        pre = now = 0;
      }

      if(j == status.length()-1){
        cout<<total<<endl;
      }
    }
  }
  return 0;
}
