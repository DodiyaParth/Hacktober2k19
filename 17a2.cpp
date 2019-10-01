#include<iostream>
#include<string>
using namespace std;

int main(){


    int t;
    cin>>t;

    string a;
    string b;
    string temp;
    for(int i=1;i<=t;i++){
        int c=0;
        cin>>a>>b;
        cout<<"Case #"<<i<<": ";

        int m = a.length();
        int n = b.length();

        int j=0,k=0;

        while(j<m && k<n){

            if(j==m){

                if(k==n){
                    cout<<"True\n";
                    break;
                }
                while(k<n){
                    if(b[k])
                }

            }


        }
    }



    return 0;
}
