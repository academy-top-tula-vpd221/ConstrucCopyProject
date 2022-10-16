#include <iostream>

class MyClass
{
public:
    MyClass()
    {
        std::cout << this << " object construct\n";
    }

    MyClass(const MyClass& obj)
    {
        std::cout << this << " object copy construct\n";
    }

    ~MyClass()
    {
        std::cout << this << " object destruct\n";
    }
};

void Func(MyClass obj2)
{
    std::cout << "function is work\n";
}

MyClass ReturnFunc()
{
    MyClass obj2;
    return obj2;
}

int main()
{
    MyClass obj;
    
    //3
    //ReturnFunc();

    //2
    //Func(obj);

    // 1
    MyClass obj2(obj);
}
