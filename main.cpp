#include <iostream>
using namespace std;

int main() {
    int n,i,j,temp;
    cout<<"Quante cifre vuoi inserire?"<<endl;
    cin>>n;
    while(n<=0){
    cout<<i+1<<"inserire un valore maggiore di 0"<<<endl;
    cin>>n;
    cout<<i+1<<"Numero:"<<r[i]<<endl;
    } 
    int r[n];
    for(i=0;i<=n-1;i++) { 
        r[i]=rand() & 11;

    } 
    for (i=0;i<=n-1;i++) {

    for (j=0; j<=n-2;j++){
        if(r[i]<r[j]){
            temp=r[i];
            r[i]=r[j];
            r[j]=temp;
        }
    }
} 
} 

//LEGGERE LE ISTRUZIONI NEL FILE README.md
