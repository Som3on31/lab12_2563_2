#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool canvas[][M],int size,int x,int y){
    if (size>=pow(pow(x,2)+pow(y,2),0.5)+1) canvas[x][y]==1;
}

void showImage(const bool yesNo[N][M]){
    
    cout << "------------------------------------------------------------------------\n";

    for (int j=0;j<N;j++){
        cout << "|";

        for (int i=0;i<M;i++){
            if (yesNo[j][i]) cout << "*";
            else cout << " ";
            
        }
        
        cout << "|\n";
    }    

    cout << "------------------------------------------------------------------------\n";
    
}