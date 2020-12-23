using namespace std;
typedef long long ll;
#include"bits/stdc++.h"
int main()
{
    int how_many,cost;
    while(scanf("%d",&how_many)!=EOF)
    {
        int a[how_many+10],temp=0,num1,num2;
        for(int i=0;i<how_many;i++)
        {
            cin >> a[i];
        }
        cin >> cost;
        sort(a,a+how_many);
        for(int i=0;i<how_many;i++)
        {
            temp= cost-a[i];
            temp= lower_bound(a+i,a+how_many,temp)-a;
            if(a[i]+a[temp]==cost)
            {
                num1=a[i];
                num2=a[temp];
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",num1,num2);}
    return 0;
}