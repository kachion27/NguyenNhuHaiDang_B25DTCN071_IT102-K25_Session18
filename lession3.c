#include<stdio.h>

void tinhtong(int a ,int b ,int *sum ){
    *sum = a + b ;
}
    int main(){
        int x=5,y=7,sum =0;
        tinhtong(x,y,&sum);
        printf ("tong=%d\n",sum);
        return 0;
    }