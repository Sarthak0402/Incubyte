#include "Chandrayaan.h"
#include<bits/stdc++.h>
using namespace std;

Chandrayaan::Chandrayaan(int x0,int y0,int z0,char init_direction){
    x=x0;
    y=y0;
    z=z0;
    direction=init_direction;
    curr_dir=init_direction;
};

void Chandrayaan::getX(){
    cout<<"X co-ordinate: "<<x<<endl;
}

void Chandrayaan::getY(){
    cout<<"Y co-ordinate: "<<y<<endl;
}

void Chandrayaan::getZ(){
    cout<<"Z co-ordinate: "<<z<<endl;
}

void Chandrayaan::getDirection(){
    cout<<"initial direction: "<<direction<<endl;
}

int main(){
    int init_x,init_y,init_z;
    char init_dir;
    Chandrayaan chandrayaan(0,0,0,'N');
    chandrayaan.getX();
    chandrayaan.getY();
    chandrayaan.getZ();
    chandrayaan.getDirection();
    return 0;
}
 