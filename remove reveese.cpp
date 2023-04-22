  #include<iostream>
   #include<algorithm>
   #include<vector>
   #include<string>
    #include<map>
  using namespace std;
  
  string removereverse(string S){
   map<char, int> m;
        
        int n= S.length();
        
        for(int i=0; i<n; i++){
             m[S[i]]++;
        }
       
        int i=0, j=n-1, count=0, left=0, right=n-1;
          string s1 ="", s2="";
       
        vector<pair<int, char>> v;
        
        while(i<=j){
            if(count %2==0){
            if(m[S[i]]> 1) {
                 m[S[i]]--;
                 count++;
             }
             else {
                 s1 +=S[i];
                 v.push_back({i, S[i]});
             }
             i++;
             
            }
           
            else {
             if(m[S[j]]> 1) {
                 m[S[j]]--;
                   count++;
             }
             else {
                 s2 +=S[j];
                 v.push_back({j, S[j]});
                 
             }
             j--;
             
            }
           
        }
        

        
        sort(v.begin(), v.end());
 
        
        string ans="";
        
         for(int i=0; i<v.size(); i++){
             ans +=v[i].second;
         }
         
        if(count %2!=0)  reverse(ans.begin(), ans.end());
         
        return ans;
        }      
       
        int main(){
            string s="abab";
            string ans="";
            ans = removereverse(s);

         cout<<ans;

        }
        
       