#include <iostream>

class MyObject
{
private:
    int data;
public:
    MyObject() : data(0){}
    ~MyObject();

    void    SetData(int a_data)
    {
        data = a_data;
    }

    void    Show()
    {
        std::cout << "data : " << data << std::endl;
    }
};

MyObject::MyObject(/* args */)
{
}

MyObject::~MyObject()
{
}


int main()
{
    MyObject ob ;

    void    (MyObject::*setfuncptr)(int) = &MyObject::SetData;

    (ob.*setfuncptr)(5);
    ob.Show();
}