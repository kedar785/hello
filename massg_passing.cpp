#include<iostream>
using namespace std;
class car{
    public:
    void accelerate(){
        cout<<"car is a accelerate";

    }
    void stop(){
        cout<<"car is stopped";
    }
};
class driver
{
    public:
    void cantrol_car(car &car,string s)
    {
        if(s=="acceelerate")
        car.accelerate();
    else if(s=="stop")
    car.stop();
else
cout<<"Invalid Message";
    }
};
int main(){
    driver d;
    car c;
    d.cantrol_car(c,"accelerate");
    d.cantrol_car(c,"stop");
    return 0;
}