#include <stdio.h>

int ucln(int a, int b)
{//C1
    // if (b == 0)
    //     return a;
    // else if (a == 0)
    //     return b;
    // return ucln(b,a%b);
  //C2
    // if(a==b)
    //     return a;
    // if(a>b)
    //     return ucln(a - b, b);
    // if(a<b)
    //     return ucln(a, b - a);
  //C3
    
  
}
int bcnn(int a, int b)
{
    return a * b / ucln(a, b);
}
int main()
{
    int a, b;
    a = 2;
    b = 4;
    printf("Uoc chung lon nhat: %d\n", ucln(a, b));
    printf("Boi chung nho nhat: %d\n", bcnn(a, b));
    return 0;
}