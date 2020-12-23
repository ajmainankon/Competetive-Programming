#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#define ll long long

int main()
{
    int inp;
    cin >> inp;
    int x;
    ll total = 0;
   for(int i=1;i<=100000;i++){
       int num=1;
       x = i;
       while(true){
           if(x%5==0){
               num++;
               x=x/5;
           }
           else break;
       }
    
       total = total + num;
       if(total==inp){
           cout << "5" << endl;
           int k = 5*i+5;
           for(int j=5*i;j<k;j++)
           {
               cout << j << " ";
           }
           return 0;
       }
       else if(total>inp){
           break;
       }
   }
   cout<<"0";
    return 0;
}