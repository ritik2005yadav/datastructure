// in this question our approach is simple
//time complexity =Olog(mn)
//we imagine that our array in linear form one row after one row
//in case of searching for row=mid/col
//col=mid%col



#include<iostream>
#include<vector>
using namespace std;
bool binarysearch(vector<vector<int>>&matrix,int target){
int row =matrix.size();
int col=matrix[0].size();
int s=0;
int e=row*col-1;
int mid=s+((e-s)/2);
while(s<=e){
    int ele=matrix[mid/col][mid%col];
    if(ele==target){
        return 1;
    }
    if(ele<target){
        s=mid+1;
    }
    if(ele>target){
        e=mid-1;

    }
   mid=s+((e-s)/2);
}return 0;

}

int main()
{int row;
int col;
cin>>row;
cin>>col;
int target;
cin>>target;
vector<vector<int>>matrix(row,vector<int>(col,0));
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        int ele;
        cin>>ele;
        matrix[i][j]=ele;

    }
}


bool flag=binarysearch(matrix,target);
cout<<flag;



}
