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

void stat(const double origin[],int size,double dest[]){
    for(int count=0;count<size;count++) dest[0]+=origin[count];
    dest[0]=dest[0]/size;

    for(int count=0;count<size;count++) dest[1]+=pow(origin[count]-dest[0],2);   
    dest[1]=sqrt(dest[1]/size);

    double rude=pow(size,-1);
    dest[2]=1;
    for(int count=0;count<size;count++) dest[2]*=origin[count];
    dest[2]=pow(dest[2],rude);
    
    for(int count=0;count<size;count++) dest[3]+=1/origin[count];
    dest[3]=size/dest[3];

    dest[4]=dest[5]=origin[0];
    for (int count=0;count<size;count++){
        if (dest[4]<origin[count]) dest[4]=origin[count];
        if (dest[5]>origin[count]) dest[5]=origin[count];
    }

}
