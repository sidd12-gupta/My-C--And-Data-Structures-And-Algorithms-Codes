#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long int N;
        long long int C,sum=0;
        cin>>N>>C;
        int a[N];
        for(int j=0;j<N;j++){
            cin>>a[j];
            sum=sum+a[j];
        }
        if(C>=sum){
            cout<<"Yes"<<endl;
        }

        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}