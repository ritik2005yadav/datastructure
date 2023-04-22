#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    cout<<s.size()<<"";

}