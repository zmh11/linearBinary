/****
* PSEUDOCODE:
loop starting from the middle of the number 
for everynumber from the middle to loop through 
n times to check if the root is equal to the number 
if the root is found turn it in to a string and add the precision
*
*/
#include <iostream>
#include <string>

using namespace std;

double power( double , double);
double postive( double );

string FindNthRoot(int number, int n, int precision) {
    // TODO implement this properly
  double high = number;
  double low = 1;
  double guess = (high+low)/2;
  int per = (int)power(10,precision);
  double close = power(.1, precision);
  while (postive(power( guess, n ) - number) > close){
    if ( power(guess, n) > number )
      high = guess;
    else 
      low = guess;
    guess = (low + high)/2;
  };
  double round = (int)(guess *per +.5);
  round = round / per;
  int count =0;
  //used to find length of string to return
  int k = (int) round;
      while (k != 0) { 
        k = k / 10; 
        count++; 
    }
  string root = to_string(round);
  root = root.substr(0,count+1+precision);
  return root;

}

double power( double x, double n){
  double power = 1;
  for (int k = 0; k< n; k++)
    power *= x;
  return power;
}

double postive( double pos){
  if (pos >= 0)
    return pos;
  return pos * (-1);
}
