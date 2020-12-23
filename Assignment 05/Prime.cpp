#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
    vector<int> allPrime(4792);
    vector<bool> isPrime(46340, true);
    
    allPrime[0] = 2;
    int pos(1);
    
    for (int i = 3; i < 46340; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < 46340; j += i)
            {
                isPrime[j] = false;
            }
            
            allPrime[pos] = i;
            ++pos;
        }
    }
    
    int num;
    while ((cin>>num), num != 0){
        cout << num << " =";
        
        bool again(false);
        
        
        if (num < 0)
        {
            num *= -1;
            cout << " -1";
            again = true;
        }
        
        else if (num == 1)
            cout << " 1";
            
        for (int pos = 0; allPrime[pos] * allPrime[pos] <= num && pos < 4792; ++pos)
        {
            while (num % allPrime[pos] == 0)
            {
                if (again)
                    cout << " x " << allPrime[pos];
                else      
                    cout << " " << allPrime[pos];
                    
                again = true;
                num /= allPrime[pos];

            }
        }
        
        if (num > 1)
        {
            if (again)
                cout << " x " << num;
            else
                cout << " " << num;
        }
        
        cout << endl;
    }
}