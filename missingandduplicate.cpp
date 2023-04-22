#include <bits/stdc++.h>
using namespace std;
 
void printTwoElements(int arr[], int n){\
  // sorting the array
  sort(arr,arr+n);
  cout << "The repeating element is ";
  for(int i=0;i<n-1;i++){
      if(arr[i]==arr[i+1]){
        cout<<arr[i]<<endl;
          break;
    }
  }
   
  cout << "and the missing element is ";
  for(int i=1;i<=n;i++){
      if(i!=arr[i-1]){
        cout<<i<<endl;
          break;
    }
  }
   
}
 
int main() {
 
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
    return 0;
}
