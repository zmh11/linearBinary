/****
* PSEUDOCODE: linear search: 
  given array list length of list and an item to find
  loop through the array not exceding the array list
  if the value in the list is the same as the item that 
  you need to find return
  if the item is not found return -1

  Binary Search: 
  given a sorted array list the length and an item to find
  set min to 0 and max to the length of the array
  while max <= min
  set mid to the middle of min and max
  check if array[mid] == what we want
  if so return mid
  else check if array[mid] < what we want
  if so set min to mid + 1
  else set max to max + 1
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
  int min = 0,
      max = length;
  while ( max >= min){
    int mid =  min + (max -min) / 2;
    if ( numbers[mid] == n)
      return mid;
    if( numbers[mid] < n )
      min = mid + 1;
    else 
      max = mid - 1;
  };
     return -1;
}
