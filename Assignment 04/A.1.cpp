#include<stdio.h>  
#include<iostream>  
#include<algorithm> 
#include <cmath> 
#include<vector>  
using namespace std;

const int maxn=200005;
int a[maxn],b[maxn];
int total;

int main()
{
    int cry,sad;
    while(~scanf("%d%d",&cry,&sad))
    {
        for(int i=0;i<cry;i++) 
        scanf("%d",a+i);
        for(int i=0;i<sad;i++) 
        scanf("%d",b+i);
        
        sort(a,a+cry);
        
        for(int i=0;i<sad;i++)
        {
            if(i==sad-1)
            {
                total=upper_bound(a,a+cry,b[i])-a;
                cout << total << endl;
            }
            else{
                total=upper_bound(a,a+cry,b[i])-a;
                cout << total << endl;
                }
        }
    }

    return 0;
}