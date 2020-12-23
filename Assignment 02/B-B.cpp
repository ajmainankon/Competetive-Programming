#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int number_of_inputs;
    cin >> number_of_inputs;
    while(number_of_inputs--){
        string text1, text2;
        cin >> text1 >> text2;

        if ( text1.size() < text2.size())
            swap(text1,text2);

        int max_last, min_last;
        
        max_last = max(text1.size(), text2.size());
        min_last = min(text1.size(), text2.size());

        int total [max_last];
        int random = max_last-1;

        for(int j= min_last-1; j>=0; random--){

            total[random] = ( text1[random] - '0' + text2[j] - '0') % 10 ;
            j--;
        }

        while(random>=0){

            total[random] = (text1[random] -'0') % 10;
            random--;
        }

        int sum = 0;
        for(int i = 0; i< max_last; i++){
            int temp = sum*10;

            sum = temp + total[i];
        }
        cout << sum << endl;

 }


 return 0;
}