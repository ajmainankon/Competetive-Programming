#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;

int how_many;
int temp = 1;
float AB,BC,AC,AD,DE;
double r;



int main()
{
    cin>>how_many;
    for(int i=0;i<=how_many-1;i++)
    {
        cin>>AB>>AC>>BC>>r;
        r = r/(r+1);

        auto cry = sqrt(r);
        AD = AB*cry;

        cout << fixed << setprecision (10)<< "Case " << temp << ": " << AD << endl;
        temp++;
            }
    return 0;
}