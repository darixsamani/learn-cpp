#include <iostream>
#include <vector>

int main(){
  std::vector<int> numbers = {2,4,3,6,1,9};
  int even = 0;
  int odd = 0;
  for (int i = 0; i< numbers.size(); i++ ){
    if (numbers[i]%2==0){
      even++;
    } else{
      odd++;
    }
  }
  std::cout << "Sum of even numbers is " << even << "\n" <<"Product of odd numbers is " << odd << std::endl;
}