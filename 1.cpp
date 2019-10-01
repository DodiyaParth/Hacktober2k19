#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<long long int> a(n);

    for(int i=0;i<n;i++){
    cin>>a[i];
    }

    for(int i=0;i<n;i++){
    if(a[i]%2==0){
    a[i] = 0;
    }
    else
    a[i] = 1;
    }

    int sum=0;

    for(int i=0;i<n;i++){
    sum += a[i];
    }

    cout<<min(sum,n-sum);


    return 0;
}
