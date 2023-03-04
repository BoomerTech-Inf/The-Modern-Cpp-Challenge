#include <iostream>
#include <vector>

int gcm(int a, int b)
{
    if(a%b == 0)
    {
        return b;
    }
    else
    {
        return gcm(b, a%b);
    }
}

int lcm(std::vector<int> &numbers)
{
    std::vector<int> tempVec = {numbers[numbers.size()-2], numbers[numbers.size()-1]};
    if(numbers.size()==1)
    {
        return numbers[0];
    }
    else if(numbers.size() == 2)
    {
        return numbers[0]*numbers[1]/(gcm(numbers[0], numbers[1]));
    }
    else
    {
        numbers.pop_back();
        numbers[numbers.size()-1]=lcm(tempVec);
        tempVec.clear();
        return lcm(numbers);
    }
}

int main() {
  std::vector<int> numbers;
  int *temp = new int[1];

  std::cout<<"Input positive numbers (type 0 to end): "<<std::endl;

  while(std::cin>>temp[0] && temp[0]>0)
  {
    numbers.push_back(temp[0]);
  }
  delete [] temp;
  
  std::cout<<"Lcm of given numbers is: "<<lcm(numbers);
 
    return 0;
}