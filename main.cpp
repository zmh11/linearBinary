#include <iostream>
#include "search.h"
#include "dictionary.h"

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 3;
  std::string words[] = {"123","122222","1234","123","123"};

  std::string words2[] = {"1233","1222","1234","13323","123"};
  
  std::cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  std::endl;

  std::cout << "Binar Search: " << BinarySearch(list,array_length,number) <<  std::endl;

  std::cout << MinWordLength(words,5) <<std::endl;

  std::cout << MaxWordLength(words,5) <<std::endl;

  std::cout << WordLengthRange(words,5) <<std::endl;

  std::cout << AverageWordLength(words, 5) <<std::endl;

  std::cout << "most commin "<<MostCommonWordLength(words, 5) <<std::endl;



}