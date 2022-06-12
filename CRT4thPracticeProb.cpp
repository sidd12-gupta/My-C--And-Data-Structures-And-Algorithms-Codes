#include<iostream>
using namespace std;

/*Basic Method
int main(){
     
    int n1,n2; 

    cout<<"Enter the number of rows: ";
    cin>>n1;

    cout<<"Enter the number of columns: ";
    cin>>n2;

    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(i==j){
                cout<<0;
            }

            else if(i<j){
                cout<<1;                
            }

            else{
                cout<<-1;
            }

            cout<<'\t';
        }

        cout<<'\n';
    }

    return 0;
}*/

//Using matrix implementation....!

void read_matrix(int mat[5][5],int,int);
void display_matrix(int mat[5][5],int,int);

int main(){
    int row,column;

    int mat[5][5];

    cout<<"Enter the no. of rows and columns of the matrix: ";
    cin>>row>>column;

    read_matrix(mat,row,column);
    display_matrix(mat,row,column);

    return 0;
}

void read_matrix(int mat[5][5],int row,int column){
    int i,j;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==j){
                mat[i][j]=0;
            }

            else if(i<j){
                mat[i][j]=1;
            }

            else{
                mat[i][j]=-1;
            }
        }
    }
}

void display_matrix(int mat[5][5],int row,int column){
    int i,j;

    for(int i=0;i<row;i++){
        cout<<'\n';
        for(int j=0;j<column;j++){
            cout<<'\t';
            cout<<mat[i][j];
        }
    }    
}