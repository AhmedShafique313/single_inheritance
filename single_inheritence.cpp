#include<iostream>
using namespace std;

//first class
class first
{
    public:
        void func()
        {
            cout<<"Single Inheritence"<<endl;
            cout<<"Inherited"<<endl;
        }
};
// second class
class second : public first
{
    public:
};

int main()
{
    second b;
    b.func();
    return 0;    
}
