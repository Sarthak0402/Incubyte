#ifndef Chandrayaan_h
#define Chandrayaan_h

class Chandrayaan
{
private:
    int x,y,z;
    char direction,curr_dir;
public:
    Chandrayaan(int x0, int y0, int z0, char init_direction);
    void getX();
    void getY();
    void getZ();
    void getDirection();
    void moveForward();
    void moveBackward();
    void turnLeft();
    void turnRight();
    void turnUp();
    void turnDown();
    void printCoord();
};

#endif