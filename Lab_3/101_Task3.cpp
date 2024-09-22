#include<iostream>
#include<string>
using namespace std;

class Time
{
 private:
     int hour;
     int min;
     int sec;
 public:
     Time()
     {
         hour=0;
         min=0;
         sec=0;
     }
    int hours()
    {
        return hour;
    }
    int minutes()
    {
       return min;
    }
    int seconds()
    {
        return sec;
    }
    void reset(int h,int m, int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    void advance(int h,int m, int s)
    {
        sec+=s;
        if(sec>60)
        {
            sec-=60;
            min++;
        }
        min+=m;
        if(min>60)
        {
            min-=60;
            hour++;
        }
        hour+=h;
        if(hour>24)
            hour=0;
    }
    void print()
    {
        cout<<"Hour: "<<hour<<" Min: "<<min<<" Sec: "<<sec<<endl;
    }
};

int main()
{
    Time t;
    t.print();
    t.advance(20,30,70);
    t.print();
    //cout<<t.hours();
}
