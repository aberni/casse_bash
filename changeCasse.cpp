// changeCasse.cpp
// g++ -std=c++11 -Wall -Wextra -o changeCasse.out changeCasse.cpp
#include <cctype>
#include <iostream>
int main()
{
  char input[100];
  std::cin.getline(input,sizeof(input));

    // change les minuscules par des majuscules et réciproquement
  //for (int i=1; i< argc; i++)
    {
      int k=0; 
      while(input[k] != 0/*argv[i][k]*/) {
	char &c = input[k];//argv[i][k];
	if (std::islower(c))
            std::cout << char(std::toupper(c));
        else if (std::isupper(c))
            std::cout << char(std::tolower(c));
        else 
            std::cout << c;
	k++;
      }
    }
  std::cout << "\n";
    return 0;
}
