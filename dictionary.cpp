/****
* PSEUDOCODE:
*
*/
#include <string>
#include <cstring>
using namespace std;

int MinWordLength(string words[]) {
    // TODO implement this function
  int min = words[0].length();
  int word=1;
  while( !words[word].empty() ){
    if( min > words[word].length() )
      min = words[word].length();
    word++;
  };
  return min;
  throw "Unsupported Operation";
}

int MaxWordLength(string words[]) {
    // TODO implement this function
  int max = words[0].length();
  int word=1;
  while( !words[word].empty() ){
    if( max < words[word].length() )
      max = words[word].length();
    word++;
  };
  return max;
  throw "Unsupported Operation";
}

int WordLengthRange(string words[]) {
    // TODO implement this function
  return MaxWordLength(words) - MinWordLength(words);
  throw "Unsupported Operation";
}

int AverageWordLength(string words[]) {
    // TODO implement this function
    throw "Unsupported Operation";
}

int MostCommonWordLength(string words[]) {
    // TODO implement this function
    throw "Unsupported Operation";
}
