#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

vector<int> quick_sort(vector<int> data, int left, int right);
void printv(vector<int> v);
void swap(int *a, int *b);

int main(int argc, char *argv[]){
  
  int n, age;
  while(1){
    
    // exception of input value is not the integer
    if(scanf("%d", &n) == 0){
      break;
    }

    // input
    vector<int> resident_age;
    if(0 < n && n <= 2000000){
      while(n-- && (cin>>age) && 0 < age && age < 100){
        resident_age.push_back(age);
      }
    }else{
      break;
    }
    // sorting
    resident_age = quick_sort(resident_age, 0, resident_age.size()-1);

    // output
    printv(resident_age);
  }

  return 0;
}
vector<int> quick_sort(vector<int> data, int left, int right){
  int pivot, i, j;
  
  // break point
  if(left > right){
   return data;
  }
  
  pivot = data[left];
  i = left+1;
  j = right;

  while(1){
    // find a greater value from left side
    while((i <= right) && (data[i]<=pivot) && i++ );
    
    // find a smaller value from right side
    while((j > left) && (data[j]>=pivot) && j--);
    
    // compare these two value
    if(i > j){
      break;
    }
    swap(&data[i], &data[j]);
  }
  swap(&data[left], &data[j]);

  // iteration
  data = quick_sort(data, left, j-1);
  data = quick_sort(data, j+1, right);

  return data;
}
void printv(vector<int> v){
  for(vector<int>::iterator it=v.begin(); it!=v.end(); ++it){
    cout<<*it<<' ';
  }
  cout<<endl;
}
void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
