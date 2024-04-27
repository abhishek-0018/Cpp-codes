#include<iostream>
using namespace std;
bool checkSort(int a[], int i){
  if(i>=5) return true;
  return a[i]<a[i+1] && checkSort(a,i+1);
}
int main() {
  int arr[]={ 1,2,3,4,5 };
  cout<<checkSort(arr,0);
}