#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num, que, count=0, printErJonno = 1;


    while(scanf("%d%d",&num,&que)){

        if(num==0 && que==0){
            return 0;
        }
        else{
            int marbles[num],query;

            for(int i=0; i<num; i++){
                cin >> marbles [i];
                
            }
            sort(marbles,marbles+num);

            for(int i=0; i<que; i++){
                cin >> query;

                if(i==0){
                    cout << "CASE# " << printErJonno << ":"<< endl;
                }
                count=0;

                for(int j=0; j<num; j++){

                    if(marbles[j]==query){
                        cout << query << " found at " << j+1 << endl;
                        break;
                    }
                    else{
                        count++;
                    }
                }
                if(count==num){
                    
                    cout << query << " not found" << endl;
                }
            }
        }
        printErJonno = printErJonno + 1;
    }
    return 0;
}