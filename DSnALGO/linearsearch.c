
#include <stdio.h>

int linear_search(int arr[],int num,int x) {
    for (int i= 0 ; i < num ; i++) 
    if (arr[i] == x) 
        return i ;
        
        return -1;
    
}

int main (void) {
      int arr[] = { 7,6,8,9,21};
      int x = 9;
      int num = sizeof (arr) / sizeof(arr[0]);

      int res = linear_search(arr,num,x);
    (res == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", res);
    return 0;


return 0 ;

}
