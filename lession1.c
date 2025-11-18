#include <stdio.h>

int main(){
    int age =20;
    printf ("gia tri tuoi la %d\n",age);
    printf ("dia chi cua tuoi la %d\n",&age);;
    int *ptr =&age;
    printf ("gia tri cua con tro ptr la %d\n",*ptr);
    printf ("dia chi cua con tro ptr la %d\n",ptr);
    return 0;
}