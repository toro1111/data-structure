#include <stdio.h>


int myFunction(int x, int y) {
    int c = x + y; 
    return c;
}


int main() {
    int a, b;


    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    int result = myFunction(a, b);

    printf("Result is =%d",result);

    return 0;
}
