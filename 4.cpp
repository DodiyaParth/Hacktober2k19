#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){


    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long int res;
    vector<int> t(k);

    long long ans=ULONG_MAX;
    for(int j=0;j<n-k+1;j++){
            res=0;
            int st=j;
            int endi = j+k-1;
            int l=0;

            for(int i=st;i<=endi;i++){
                t[l++] = a[i];
           //     cout<<t[l-1]<<" ";
            }

           // cout<<"\n";
            for(int i=0;i<k;){

                while(t[i]>t[0]){

                    t[i] = t[i]/2;
                    res++;
                  //  cout<<j<<" "<<res<<"\n";
                }
                if(t[i] == t[0]){
                    i++;
                }
                else{
                    t[0] = t[0]/2;
                    res += i;
                }

            }
          //  cout<<res<<"\n";
    if(res<ans){
        ans = res;
    }
    }





    cout<<ans;

}
