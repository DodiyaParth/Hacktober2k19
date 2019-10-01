#include<iostream>
using namespace std;


int main(){

    int sum=0;
    int a[4];
    for(int i=0;i<4;i++){
    cin>>a[i];
    sum += a[i];
    }

    int c=0;
    if(sum%2==1){
    cout<<"NO";
    return 0;}

    for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
    if(a[i]+a[j]==sum/2){
    c=1;
   // cout<<a[i]<<" "<<a[j]<<"\n";
    }
    }
    }

    for(int i=0;i<4;i++){
        if(a[i]==sum/2)
            c=1;
    }

    if(c==1){
    cout<<"YES";
    }
    else
        cout<<"NO";











    return 0;
}
