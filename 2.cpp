#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

    int res=0;
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
    cin>>a[i];
    }

    stack<int> s;

    for(int i=0;i<n;i++){

        while(!s.empty() && a[s.top()]>a[i]){
        res++;
        s.pop();
        }
        s.push(i);

    }

    cout<<res<<"\n";


    }



    return 0;
}
