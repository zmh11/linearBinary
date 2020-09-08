/****
* PSEUDOCODE:
loop starting from the middle of the number 
while the number to the power of n is not 
to the right precision
if the power of the number is greater than the
number set high to guess
else set low to guess

turn the number into a string get the length to the rght 
precision. 
if the number is shorter than the length add a 0
until it is the precision length.

return string
*
*/
#include <iostream>
#include <string>

double power( double , double);
double postive( double );

std::string FindNthRoot(int number, int n, int precision) {
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
  int temp_int = (int) round; 
      while (temp_int != 0) { 
        temp_int = temp_int / 10; 
        count++; 
    }
  std::string root = std::to_string(round);
  root = root.substr(0,count+1+precision);
  if(precision == 0){
    root = root.substr(0,count);
    return root;
  }
  if (root.length() == ( count + precision +1))
    return root;
  while(root.length() <= ( count + precision +1 )){
    root+="0";
  }
  return root;
}
// return the number x to the power of n
double power( double x, double n){
  double power = 1;
  for (int k = 0; k< n; k++)
    power *= x;
  return power;
}
// return the double as postive 
double postive( double pos){
  if (pos >= 0)
    return pos;
  return pos * (-1);
}
