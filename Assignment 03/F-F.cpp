#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
  
using namespace std;
int main()
{
    string text;
    int count = 1;
    while(cin >> text && text != "#")
    {
        if(text == "HELLO")

            cout << "Case " << count++ << ": " << "ENGLISH" << "\n";
        else if(text == "HOLA")

            cout << "Case " << count++ << ": " << "SPANISH" << "\n";
        else if(text == "HALLO")

            cout << "Case " << count++ << ": " << "GERMAN" << "\n";
        else if(text == "BONJOUR")

            cout << "Case " << count++ << ": " << "FRENCH" << "\n";
        else if(text == "CIAO")

            cout << "Case " << count++ << ": " << "ITALIAN" << "\n";
        else if(text == "ZDRAVSTVUJTE")

             cout << "Case " << count++ << ": " << "RUSSIAN" << "\n";
        else

            cout << "Case " << count++ << ": " << "UNKNOWN" << "\n";
    }

    return 0;
}