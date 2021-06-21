#include<iostream>

void g(int)
{}

template<typename T>
void f(T& t)
{
    //g(); // error
    g(0);
    t.x = 0;
}

int main()
{
    struct P
    {
        int x;
    };

    P a;
    f(a);
    std::cout << a.x << "\n";
}