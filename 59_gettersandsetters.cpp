#include <iostream>

using namespace std;

class Stove 
{
    private:
    int temperature = 0;

    public:
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if(temperature < 0)
        {
            this->temperature = 0;
        }else if(temperature >= 10)
        {
            this->temperature = 10;
        }else{
            this->temperature = temperature;
        }
    }
    Stove(int temperature)
    {
        setTemperature(temperature);
    }
};

int main() {
    Stove stove(-40);
    //stove.temperature = 10000;
    //stove.setTemperature(-3);
    cout << "The temperature of this stove is: " << stove.getTemperature();

    return 0;
}