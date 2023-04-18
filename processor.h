#ifndef MEMORY_H
#define MEMORY_H
#define SIZE 256
int alu(enum alucmd opcode, int input1, int input2);
int mux2x1_1(int I0, int I1, int C);
int mux2x1_2(int In0, int In1, int CC);
void Control_Unit(int e1, int e2, int e3, int e4, int e5);
int PC(int a);

int initializeCode(int size); // Initializes memory array of size SIZE
unsigned char readCode(int address); // Read data from address (index)
void writeCode(int address, unsigned char val); // Writes data on address (index)
void printCodeData(int size); // Prints whole array
//program counter only address
//registers read write
//instruction memory
#endif