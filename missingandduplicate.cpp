#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
set<int>s;
int sum=0;

    int a[5]={3,2,1,5,3};
    for(int i=0;i<5;i++){
        s.insert(a[i]);
      
    }
     for(int i=0;i<s.size();i++){
        sum+=s[i];

     }

    

}