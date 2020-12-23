#include<bits/stdc++.h>
using namespace std;

int main(){
    int text1,text2,text3,count=0;

    int arr[100005];
    string s;

    cin>>s>>text1;

    for(int i=1;i<s.size();i++){

        if(s[i]==s[i-1])
            count++;

        arr[i]= count;

    }

    while(text1--){
        cin>>text2>>text3;
        cout<<arr[text3-1]-arr[text2-1]<<endl;
    }

}