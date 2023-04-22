#include<iostream>
#include<vector>

using namespace std;
int firstoccurance(int a[],int key,int n){
  int s=0;
  int e=n-1;
  int ans=-1;
 

  while (s<=e)
  { int mid=s+(e-s)/2;

   if(a[mid]>=key){
 ans=mid;
 e=mid-1;
   }
   else {
    s=mid+1;
   }}
  return ans;
  }
  
  



int lastoccurance(int a[],int key,int n){
  int s=0;
  int e=n-1;
  int ans=-1;
 

  while (s<=e)
  {
    int mid=s+(e-s)/2;

   if(a[mid]<=key){
 ans=mid;
 s=mid+1;}
 
   else {
   e=mid-1;
   }
   }
   
  return ans;
  
  }
  

int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
int m=firstoccurance(a,key,n);
int l=lastoccurance(a,key,n);
cout<<"index" <<m <<" "<<l;

return 0;
}