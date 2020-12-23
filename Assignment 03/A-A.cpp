#include<stdio.h>  
#include<iostream>  
#include<algorithm> 
#include <cmath> 
#include<vector>  
using namespace std;  

char cnt,step[10010];  
vector<string> vec;  
int main(){ 
  int l,m=0;  
  while(~(cnt=getchar())){
    if(isupper(cnt)||islower(cnt))  
      step[m++]=tolower(cnt);  
    else if(m!=0){
      step[m]='\0';  
      vec.push_back(step);
      m=0;  
    }  
  }  
  sort(vec.begin(),vec.end());  

  for(l=0;l<vec.size();l++)
    
   if(l==0 || vec[l]!=vec[l-1] )  
   cout<<vec[l]<<endl;  
}  