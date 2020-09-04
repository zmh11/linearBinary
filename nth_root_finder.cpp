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

string FindNthRoot(int number, int n, int precision) {
    // TODO implement this properly
    int root = number;
    string rightnum = "";
    for( int k = 2; k <= number/2; k++){
      root = 1;
      for( int i = 1; i <=n; i++){
        root *= k;
      }
    if (root == number)
      rightnum = to_string(k);
    }
    rightnum +=".";
    for(int k = 0; k < precision; k++)
      rightnum += "0";
    return rightnum;
}
