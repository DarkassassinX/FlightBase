#include<iostream>
using namespace std;
int main(int argc, char){
drone.take_off(5.0);

drone.position_set(6.5, 0, 5, relative=True);
drone.position_set(6.5, 6.5, 5, relative=True);
drone.position_set(0, 6.5, 5, relative=True);
drone.position_set(0, 0, 5, relative=True);
drone.land(0);
}