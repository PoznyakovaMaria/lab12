#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>     
#include <locale.h>     
#define _USE_MATH_DEFINES     
#include <math.h>

//1
int main() {
    int pi;
    float pf;
    double* pd;
    printf("%lu\n", sizeof(pi));
    printf("%lu\n", sizeof(pf));
    printf("%lu\n", sizeof(pd));
    
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of double: %lu\n", sizeof(double));

    //2
    float PI = 3.14159, * p1, * p2; //Создается переменная "PI" типа "float", со значением "3.14159"
    p1 = p2 = &PI; //Объявляются два указателя "p1" и "p2", которые хранят адреса переменных типа `float`

    printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
    printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);
    //При выполнении программы выведется информация о адресах переменных и их значениях 

    //3
    _Bool *pa, x = 1;
    pa = &x;

    printf("По адресу %p хранится *pa=%u\n", (void*)pa, *pa);
    pa++;
    printf("По адресу %p хранится *pa=%u\n", (void*)pa, *pa);
    pa--;
    printf("По адресу %p хранится *pa=%u\n", (void*)pa, *pa);

    //4
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    float* ptr_a;
    printf("array: %p\n", (void*)array);         
    printf("&array[0]: %p\n", (void*)&array[0]);  
    printf("&array: %p\n", (void*)&array);

    //5
    int x = 0x12345678;
    int* prt;
    unsigned char* a1, * a2, * a3, * a4;
    unsigned char* a;

    prt = &x;
    a = (unsigned char*)prt;
    a1 = a + 3;
    a2 = a + 2;
    a3 = a + 1;
    a4 = a;
    printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
}