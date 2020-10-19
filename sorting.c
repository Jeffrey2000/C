// Including two header files
// Input and output and standard library
#include <stdio.h>
#include <stdlib.h>

int main()
{

 //bubble sort
 int numbers[10] = {10,9,8,7,6,5,4,3,2,1};
 for(int i = 0; i < 10; ++i){
    for(int k = 0; k < 10 - i; ++k){
        if (numbers[k] > numbers[k+1]) {
            int temp = numbers[k];
            numbers[k] = numbers[k+1];
            numbers[k + 1] = temp;
        }
    }
 }


  int l = 0, r = 10, x = 10;
  int result = binarySearch(numbers,l, r, x);
  if (result >= 0){
    printf("%d found at position %d", x,result);
  }else{
    printf("%d not found", x);
  }

 return 0;
}


//binary search
int binarySearch(int arr[], int l, int r, int x){
    if(r >= l){
        int mid = (l + r ) -1 / 2;
        if(arr[mid]==x){
            return mid;
        }else if(x < arr[mid]){
            return binarySearch(arr, l, mid - 1, x);
        }else{
            return binarySearch(arr, mid + 1, r, x);
        }
    }
    return -1;
}


