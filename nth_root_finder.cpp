/****
* PSEUDOCODE:
*
*/
#include <iostream>
#include <string>

using namespace std;

string FindNthRoot(int number, int n, int precision) {
    // TODO implement this properly
    int root=number;
    string rightnum ="";
    for( int k = 2; k <= number/2; k++){
      root = 1;
      for( int i = 1; i <=n; i++){
        cout << root << " : "<< k<<endl;
        root *= k;
      }
      cout <<"root: "<< root << endl;
    if (root == number)
      rightnum = to_string(k);
    }
    return rightnum;
}
