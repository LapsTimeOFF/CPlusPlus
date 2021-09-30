#include <iostream>
#include <string>

int main()
{
     std::cout << "Hello World !" << std::endl;
     std::cout << "How are you ?" << std::endl;
     printf("Hello form printf() Function !\n");

     printf("Type a number : ");
     int number;
     std::cin >> number;
     std::cout << "Your number is : " << number << std::endl;

     return 0;
}