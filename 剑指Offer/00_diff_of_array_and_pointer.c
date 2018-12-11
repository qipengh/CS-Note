/**
* 数组和指针的区别
*/
#include<stdio.h>

int GetSize(int data[]) {
    return sizeof(data);
}

int main(int argc, char const *argv[])
{
    int data1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(data1);

    int* data2 = data1;
    int size2 = sizeof(data2);

    int size3 = GetSize(data1);
    
    printf("%d, %d, %d\n", size1, size2, size3);
    return 0;
}
