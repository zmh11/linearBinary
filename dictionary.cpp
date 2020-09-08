/****
* PSEUDOCODE:
MinWordLength
loop array and compare each length
if the length is smaller that the 
curent smallest set it as the smallest
return shortest

MaxWordLength
loop array and compare each length
if the length is larger that the last 
set it as the longest length return longest

WordLegthRange
return max - min word length

MostCommonWordLength
loop through array
loop through rest of array 
starting at current spot
count how many times the length is repeated
if it is repeated the most return that
*
*/
#include <string>

int MinWordLength(std::string words[], int length) {
    // TODO implement this function
  int min = words[0].length();
  for ( int word = 1; word < length; word++){
    if ( min > words[word].length() )
      min = words[word].length();
  }
  return min;
    throw "Unsupported Operation";
}

int MaxWordLength(std::string words[], int length) {
    // TODO implement this function
  int max = words[0].length();
  for ( int word = 1; word < length; word++){
    if ( max < words[word].length() )
      max = words[word].length();
  }
  return max;
    throw "Unsupported Operation";
}

int WordLengthRange(std::string words[], int length) {
    // TODO implement this function
  return MaxWordLength(words, length) - MinWordLength(words, length);
    throw "Unsupported Operation";
}

int AverageWordLength(std::string words[], int length) {
    // TODO implement this function
  int total_length = 0;
  for( int word = 0; word < length; word++ ){
    total_length += words[word].length();
  }
  return total_length / length;
    throw "Unsupported Operation";
}

int MostCommonWordLength(std::string words[], int length) {
    // TODO implement this function
  int common_length = 0;
  int number_repeated = 0;
  int compare_repeated = 0;
  for ( int word = 0; word < length; word++){
    compare_repeated = 0;
    for (int k = word; k < length; k++ ){
      if ( words[word].length() == words[k].length())
        compare_repeated++;
    }
    if (number_repeated < compare_repeated){
      common_length = words[word].length();
      number_repeated = compare_repeated;
    }
  }
  return common_length;
  throw "Unsupported Operation";
}
