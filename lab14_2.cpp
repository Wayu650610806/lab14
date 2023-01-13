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

void updateImage(bool image[][M],int s,int x,int y){
    
    for(int r=0;r<N;r++){
        for(int c=0;c<M;c++){
            double draw=pow(pow(r-x,2)+pow(c-y,2),0.5);
            if(draw<=s-1){
            image[r][c]=1;
        }
    }
    }
}
void showImage(const bool im[][M]){
    
    cout<<"------------------------------------------------------------------------";
    cout<<"\n"<<"|";
    for(int r=0;r<N;r++){
        for(int c=0;c<M;c++){
            if(im[r][c]==1){
            cout<<'*'; 
        }else{cout<<" ";}
        }if(r<N-1){
        cout<<"|"<<"\n"<<"|";}
        if(r==N-1){cout<<"|"<<"\n";}
    }
    cout<<"------------------------------------------------------------------------\n";

}
