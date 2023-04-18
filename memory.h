#ifndef MEMORY_H
#define MEMORY_H
#define SIZE 256
//Prototypes
int initializeMemoryI(int size); // Initializes memory array of size SIZE
unsigned char readMemoryI(int address); // Read data from address (index)
void writeMemoryI(int address, unsigned char val); // Writes data on address (index)
void printMemoryDataI(int size); // Prints whole array

int initializeMemoryD(int size); // Initializes memory array of size SIZE
unsigned char readMemoryD(int address); // Read data from address (index)
void writeMemoryD(int address, unsigned char val); // Writes data on address (index)
void printMemoryDataD(int size); // Prints whole array

#endif

