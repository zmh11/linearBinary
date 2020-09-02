/****
* PSEUDOCODE: linear search: 
  given array list length of list and an item to find
  loop through the array not exceding the array list
  if the value in the list is the same as the item that 
  you need to find return
  if the item is not found return -1

*   
*/
int LinearSearch(int numbers[], int length, int n) {
    // TODO implement this function
  for ( int pos = 0; pos < length; pos++ ){
    if ( numbers[pos] == n )
      return pos;
  }
  return -1;
}

int BinarySearch(int numbers[], int length, int n) {
    // TODO implement this function
     return 1;
}
