#include <iostream>

int gcd(int a, int b)
{
    if(a%b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a%b);
    }
}

int main()
{
    int first, second;

    std::cout<<"Enter two positive integers: "<<std::endl;
    std::cin>>first>>second;

    std::cout<<"GCD is: "<<gcd(first, second);

}