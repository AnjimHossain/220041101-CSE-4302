#include<iostream>
#include<string>
using namespace std;

class Temperature
{
private:
    float temp;
    char unit;

public:
    Temperature()
    {
        temp=0.0;
        unit='C';
    }
    void assign(float num, char str)
    {
        cout<<"num "<<num<<endl;
        if((num<0 && str=='k') || (num<-273.15 && str=='C') || (num<-459.67 && str=='F'))
            cout<<"Less than absolute zero temperature cannot be assigned"<<endl;
        else
        {
            temp=num;
            unit=str;
        }

    }
    float convert(char str)
    {
        float newtemp=temp;
        if(unit==str)
            return temp;
        else if(str=='F' && unit=='C')
        {
            newtemp=temp*(9.0/5.0)+32.0;
        }
        else if(str=='K' && unit=='C')
        {
            newtemp=temp+273.15;
        }
        else if(str=='C' && unit=='F')
        {
            newtemp=(temp-32.0)*(5.0/9.0);
        }
        else if(str=='C' && unit=='K')
        {
            newtemp=temp-273.15;
        }
        else if(str=='K' && unit=='F')
        {
            newtemp=(temp-32.0)*(5.0/9.0);
            newtemp=newtemp+273.15;
        }
        else if(str=='F' && unit=='K')
        {
             newtemp=temp-273.15;
             newtemp=newtemp*(9.0/5.0)+32.0;
        }
        return newtemp;

    }

    void print()
    {
        if(unit=='C')
            cout<<"The temperature is "<<temp<<" Celcius"<<endl;
        else if(unit=='F')
            cout<<"The temperature is "<<temp<<" Fahrenheit"<<endl;
        else
            cout<<"The temperature is "<<temp<<" Kelvin"<<endl;
    }
};

int main()
{
   Temperature t;
   float New;
   //t.convert('F');
   t.assign(273.15,'K');
   New=t.convert('C');
   t.assign(New,'C');
   t.print();
}
