  #include<iostream>
  #include<algorithm>
  using namespace std;
  int main(){

  int n=3;
  int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  int h[n][n];
       
          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                cout<<matrix[i][j];
        
        }
        cout<<"\n";}
        for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  h[j][n-i-1]=matrix[i][j];
                  }
        }
        cout<<"\n";

  for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                cout<<h[i][j];
        
        }
        cout<<"\n";
        
        }
        
        }