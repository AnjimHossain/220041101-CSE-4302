#include<iostream>
using namespace std;

class Counter{
private:
    int count;
    int step;
public:
    Counter()
    {
        count=0;
        step=1;
    }
    void setIncrementStep(int num)
    {
        step=num;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=step;
    }
    void resetCount()
    {
        count=0;
    }

};

int main()
{
   Counter c;
   c.setIncrementStep(2);
   c.increment();
   c.increment();
   cout<<c.getCount()<<endl;
   c.resetCount();
   cout<<"after reset "<<c.getCount()<<endl;

}
