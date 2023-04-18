#include<stdio.h>
#include<stdlib.h>
#include "memory.h"

unsigned int memoryI[SIZE];
unsigned int memoryD[SIZE];


//Our first instruction memory starts
void writeMemoryI(int address, unsigned char val)
{
   memoryI[address] = val;
}

unsigned char readMemoryI(int address)
{
   return memoryI[address];
}

int initializeMemoryI(int size)
{
   int i;
   for(i=0;i<SIZE;i++)
   {
      memoryI[i] = 0;
   }
}

void printMemoryDataI(int size)
{
   int i;
   for(i=0;i<SIZE;i++)
   {
      printf("address[%d] = %c %x\n", i, memoryI[i], memoryI[i]);
   }
}
//Our first instruction memory ends

//Our first Data memory starts
void writeMemoryD(int address, unsigned char val)
{
   memoryD[address] = val;
}

unsigned char readMemoryD(int address)
{
   return memoryD[address];
}

int initializeMemoryD(int size)
{
   int i;
   for(i=0;i<SIZE;i++)
   {
      memoryD[i] = 0;
   }
}

void printMemoryDataD(int size)
{
   int i;
   for(i=0;i<SIZE;i++)
   {
      printf("address[%d] = %c %x\n", i, memoryD[i], memoryD[i]);
   }
}
//Our first Data memory ends

