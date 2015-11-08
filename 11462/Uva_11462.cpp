#include<iostream>
#include<algorithm>

using namespace std;

int p[2000000];

int main(){
  int n;

  while((cin>>n) && 0 < n && n < 2000000){
    for(int i = 0 ; i<n ; ++i){
      cin>>p[i];
    }
    sort(&p[0], &p[n]);
    for(int i = 0 ; i<n ; ++i){
      cout<<p[i]<<(i==(n-1)?"":" ");
    }
    cout<<endl;
  }
}
