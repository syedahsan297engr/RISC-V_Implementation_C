#include<stdio.h>
#include "memory.h"

int main(void)
{
    initializeMemoryD(SIZE);

    writeMemoryD(0, 'a');
    writeMemoryD(1, 'e');
    writeMemoryD(2, 'i');
    writeMemoryD(3, 'o');
    writeMemoryD(4, 99);
    writeMemoryD(8, 0X32);

    printf("%c", readMemoryD(1));
    printMemoryDataD(10);

    return 0;

}
