#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
        vector<vector<int>> ans(n,vector<int>(n,0));
        int x = 1,sr=0,sc=0,er=n-1,ec=n-1,i;
        while(sr<=er&&sc<=ec){
            for(i=sc;i<=ec;i++){
                ans[sr][i]  = x++;
            }sr++;
            for(i = sr; i<= er; i++){
                ans[i][ec] = x++;
            }
            ec--;
            for(i = ec; i>=sc; i--){
                ans[er][i] = x++;
            }
            er--;
            for(i = er; i>= sr; i--){
                ans[i][sc] = x++;
            }
            sc++;
        }
        for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                cout<<ans[i][j];
              }
              cout<<"\n";

        }
       
    }
