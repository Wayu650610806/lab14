#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    double sumsd=0 ;
    for(int i=0;i<n;i++){
        sumsd+=pow(a[i]-(sum/n),2);
    }
    double sumt=1;
    for(int i=0;i<n;i++){
        sumt*=a[i];
    }
    double sumd=0;
    for(int i=0;i<n;i++){
        sumd+=1.0/a[i];
    }
    double max=a[1] ,min=a[1];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    b[0]=sum/n;
    b[1]=pow(sumsd/n,0.5);
    b[2]=pow(sumt,1.0/n);
    b[3]=n/sumd;
    b[4]=max;
    b[5]=min;
}