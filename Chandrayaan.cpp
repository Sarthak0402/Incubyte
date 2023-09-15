#include "Chandrayaan.h"
#include <bits/stdc++.h>
using namespace std;

Chandrayaan::Chandrayaan(int x0, int y0, int z0, char init_direction)
{
    x = x0;
    y = y0;
    z = z0;
    direction = init_direction;
    curr_dir = init_direction;
};

void Chandrayaan::getX()
{
    cout << "X co-ordinate: " << x << endl;
}

void Chandrayaan::getY()
{
    cout << "Y co-ordinate: " << y << endl;
}

void Chandrayaan::getZ()
{
    cout << "Z co-ordinate: " << z << endl;
}

void Chandrayaan::getDirection()
{
    cout << "initial direction: " << direction << endl;
}

void Chandrayaan::moveForward()
{
    if (curr_dir == 'N')
        y++;
    if (curr_dir == 'S')
        y--;
    if (curr_dir == 'E')
        x++;
    if (curr_dir == 'W')
        x--;
    if (curr_dir == 'U')
        z++;
    if (curr_dir == 'D')
        z--;
}

void Chandrayaan::moveBackward()
{
    if (curr_dir == 'N')
        y--;
    if (curr_dir == 'S')
        y++;
    if (curr_dir == 'E')
        x--;
    if (curr_dir == 'W')
        x++;
    if (curr_dir == 'U')
        z--;
    if (curr_dir == 'D')
        z++;
}

void Chandrayaan::turnLeft()
{
    if (curr_dir == 'N')
        curr_dir = 'W';
    if (curr_dir == 'S')
        curr_dir = 'E';
    if (curr_dir == 'E')
        curr_dir = 'N';
    if (curr_dir == 'W')
        curr_dir = 'S';
    // if(curr_dir=='U') curr_dir='N';
    // if(curr_dir=='D') curr_dir='S';
}

void Chandrayaan::turnRight()
{
    if (curr_dir == 'N')
        curr_dir = 'E';
    if (curr_dir == 'S')
        curr_dir = 'W';
    if (curr_dir == 'E')
        curr_dir = 'S';
    if (curr_dir == 'W')
        curr_dir = 'N';
}

void Chandrayaan::turnUp()
{
    char prev_dir;
    if (curr_dir != 'U' || curr_dir != 'D')
    {
        prev_dir = curr_dir;
        curr_dir = 'U';
    }
    else if(curr_dir=='D') curr_dir=prev_dir;
}

void Chandrayaan::turnDown(){
    char prev_dir;
    if(curr_dir!='U'||curr_dir!='D'){
        prev_dir=curr_dir;
        curr_dir='D';
    }
    else if(curr_dir=='U') curr_dir=prev_dir;
}

void Chandrayaan::printCoord(){
    cout<<"Current Position: ("<<x<<","<<y<<","<<z<<") Direction: "<<curr_dir<<endl;
}

int main()
{
    int init_x, init_y, init_z;
    char init_dir;
    cout<<"Enter initial Co-ordinates: ";
    cin>>init_x>>init_y>>init_z;
    cout<<endl<<"Enter Inital Direction: ";
    cin>>init_dir;
    Chandrayaan chandrayaan(0, 0, 0, 'N');
    chandrayaan.getX();
    chandrayaan.getY();
    chandrayaan.getZ();
    chandrayaan.getDirection();
    int n;
    cout<<"Enter no. of commands: ";
    cin>>n;
    vector<char>commands(n);
    cout<<"Enter Commands: ";
    for(int i=0;i<n;i++){
        cin>>commands[i];
    }
    for(char command:commands){
        if(command=='f') chandrayaan.moveForward();
        if(command=='b') chandrayaan.moveBackward();
        if(command=='l') chandrayaan.turnLeft();
        if(command=='r') chandrayaan.turnRight();
        if(command=='u') chandrayaan.turnUp();
        if(command=='d') chandrayaan.turnDown();
    }
    chandrayaan.printCoord();
    return 0;

    return 0;
}
