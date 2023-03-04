#include <iostream>

unsigned int check(unsigned int value)
{
    if(value%3==0 || value%5==0)
    {
        return value;
    }
    else
    {
        return 0;
    }
}

int main()
{
    unsigned int limit;
    unsigned long int sum = 0;
    std::cout<<"Enter the limit value: "<<std::endl;
    std::cin>>limit;
    for(unsigned int i = 1; i<=limit; i++)
    {
        sum += check(i);
    }
    std::cout<<"The sum is: "<<sum<<std::endl;
}