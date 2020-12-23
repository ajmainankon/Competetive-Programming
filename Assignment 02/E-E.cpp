#include <cstdio>
#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    int n, str ;
    int a[10000];

    cin >> n;

    while(n--)
    {
        cin >> str;

        for(int i=1; i<=str; i++)
            
            cin >> a[i];

        sort(a+1,a+1+str);  
        for(int i=1; i<=str; i++)
        {
            printf("%d",a[i]);

            if(i!=str)     
                printf(" ");
            else
                printf("\n");
        }
    }






    return 0;


}