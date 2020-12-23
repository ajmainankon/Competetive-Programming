
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long int ll;

 
int main(){
    ll num1,num2;
    scanf("%I64d%I64d",&num1,&num2);
    ll a=num1/num2;
    if(a%2==0){
        cout<< "NO" << endl;
    }
    else{
        cout<< "YES" << endl;
    }
        
    return 0;

}