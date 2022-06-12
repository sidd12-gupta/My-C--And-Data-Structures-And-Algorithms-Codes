#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        int P[N],C[N];
        for(int j=0;j<N;j++){
            cin>>P[j]>>C[j];}
        for(int k=0;k<N;k++){     
            if(X-Y<=P[k] && K>=C[k]){
                cout<<"LuckyChef"<<endl;
            }
            else{
                cout<<"UnluckyChef"<<endl;
            }
        }



    }
    return 0;
    
}