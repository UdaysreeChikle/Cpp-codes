#include <iostream>
using namespace std;

template <typename T>
class Smartpointer{
    T* ptr;
public:
    explicit Smartpointer(T* p = nullptr):ptr(p)
    {}
    ~Smartpointer()
    {
        ptr = nullptr;
    }
    
    T& operator* () const{
        return *ptr;
    }
    
    T* operator-> () const{
        return ptr;
    }
    
    Smartpointer(const Smartpointer& obj) = delete;
    Smartpointer& operator=(const Smartpointer& obj) = delete;
    
    Smartpointer(Smartpointer&& other) noexcept
    {
        ptr = other.ptr;
        ptr = nullptr;
    }
    
    Smartpointer& operator=(Smartpointer&& other) noexcept
    {
        if(this!= &other)
        {
            delete ptr;   
            ptr = other.ptr;
            ptr = nullptr;
        }
    }
    
    T* get () const{
        return ptr;
    }
};

//When to use unique_ptr? 
//Use unique_ptr when you want to have single ownership (Exclusive) of resource.

#include <iostream>
using namespace std;

int main()
{
    unique_ptr<int> p1= make_unique<int>(100);

    unique_ptr<int> p2 = move(p1);
    cout << *p1 << endl;

    if (p1 != nullptr)
        cout << "moved to p1" << endl;
    else
        cout << "Not moved to p1" << endl;

    cout << "exit from main" << endl;


    return 0;
}

//////////////////////////////////////////


#include <iostream>
using namespace std;

class Sample
{
public:
    Sample() { cout << "constructor called" << endl; }
    ~Sample() { cout << "destructor called " << endl; }

    void fun1()
    {
        cout << "Fun1 called" << endl;
    }
};
int main()
{
    unique_ptr<Sample> p1= make_unique<Sample>();

    unique_ptr<Sample> p2 = move(p1);
    p2->fun1();
        
    p2.reset();
    if (p1 == nullptr)
        cout << "resource moved" << endl;
    else
        p1->fun1();
    cout << "exiting main" << endl;

    return 0;
}

