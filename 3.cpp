#include<iostream>
#include<vector>
using namespace std;


int main(){


    int t;
    cin>>t;

    long long int n,m;

    while(t--){

        cin>>n>>m;

        long long int temp = n/m;

        long long int temp2 = temp%10;
        long long int res=0,res2=0;

        int a = m%10;

        if(temp>=10){

        long long int sum=0;

        for(int i=1;i<=10;i++){
            sum += ((a*i)%10);
            if(i==temp2){
            res2 = sum;
            }
        }

        res = sum*(temp/10) + res2;


        }
        else{
            for(int i=1;i<=temp2;i++){

                res += ((a*i)%10);

            }

        }
        cout<<res<<"\n";

    }



    return 0;
}
