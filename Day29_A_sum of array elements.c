//Q57: Find the sum of array elements.


#include <stdio.h>
int main() {
    int i=0,sum=0,arr[6]={29,56,63,72,84,96};
    while(i<6){
        sum=sum+arr[i];
        i++;
    }
    printf("The sum of the elements of arrray is: %d." ,sum);
         return 0;
    
}
