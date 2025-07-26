#include <stdio.h>
int main(){

int a=1025;
int *p;
p=&a;

printf("Size of int is %zu bytes\n",sizeof(int));
printf("address = %p, value = %d\n", (void*)p, *p);

char *p0;
p0=(char*)p;


printf("Size of char is %zu bytes\n",sizeof(char));
printf("address = %p, value = %d\n", (void*)p0, *p0);

return 0;
}
