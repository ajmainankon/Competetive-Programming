#include<bits/stdc++.h>

using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 == num2){
        cout << num1*10 << " "<< num2*10+1 << endl;
    }
    else if(num1+1 == num2){
        cout << num1 <<" " << num2 << endl;
    }
    else if(num2 == 9 && num1 == 1){
        cout << "9 10" <<endl;
    }
    else{
        cout << -1<< endl;
    }

    return 0;
}