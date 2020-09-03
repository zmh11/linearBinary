/****
* PSEUDOCODE:
*
*/
#include <string>
using namespace std;

int MinWordLength(string words[], int length) {
    // TODO implement this function
  int min = words[0].length();
  for ( int word = 1; word < length; word++){
    if ( min > words[word].length() )
      min = words[word].length();
  }
  return min;
    throw "Unsupported Operation";
}

int MaxWordLength(string words[], int length) {
    // TODO implement this function
  int max = words[0].length();
  for ( int word = 1; word < length; word++){
    if ( max < words[word].length() )
      max = words[word].length();
  }
  return max;
    throw "Unsupported Operation";
}

int WordLengthRange(string words[], int length) {
    // TODO implement this function
  return MaxWordLength(words, length) - MinWordLength(words, length);
    throw "Unsupported Operation";
}

int AverageWordLength(string words[], int length) {
    // TODO implement this function
  int total_length = 0;
  for( int word = 0; word < length; word++ ){
    total_length += words[word].length();
  }
  return total_length / length;
    throw "Unsupported Operation";
}

int MostCommonWordLength(string words[], int length) {
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
