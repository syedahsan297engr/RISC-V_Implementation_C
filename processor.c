#include<stdio.h>
#include<stdlib.h>
#include "processor.h"


//memories making
unsigned int programcounter[SIZE];
unsigned int registers[SIZE];
unsigned int Instructionmemory[SIZE];
//these are the memories

//I am using enum for ALU
enum alucmd {ADD,SUB,MUL,DIV,REM,AND,OR,NOT,SRIGHT,SLEFT,BAND,BOR,BNOT,BXOR,ASGN,INC_OP1,INC_OP2};               // Type definition
enum alucmd cmd; // Variable of type enum alucmd

//ALU function end here .................
//its prototype is described in header file.
int alu(enum alucmd opcode, int input1, int input2)
{
    int result;
    switch (opcode)
    {
    case ADD:
        result = input1 + input2;
        printf("Command executed: ADD\n");
        break;
    case SUB:
        result = input1 - input2;
        printf("Command executed : SUB\n");
        break;
    case MUL:
        result = input1 * input2;
        printf("Command executed : MUL\n");
        break;
    case DIV:
        result = input1 / input2;
        printf("Command executed : DIV\n");
        break;
    case REM:
        result = input1%input2;
        printf("Command executed : REM\n");
        break;
    case AND:
        result = input1&&input2;
        printf("Command executed : AND\n");
        break;
    case OR:
        result = input1||input2;
        printf("Command executed : OR\n");
        break;
    case NOT:
        result = !input1;
        printf("Command executed : NOT\n");
        break;
    case SRIGHT:
        result = input1>>input2;
        printf("Command executed : SRight\n");
        break;
    case SLEFT:
        result = input1<<input2;
        printf("Command executed : SLeft\n");
        break;
    case BAND:
        result = input1&input2;
        printf("Command executed : BAND\n");
        break;
    case BOR:
        result = input1|input2;
        printf("Command executed : BOR\n");
        break;
    case BNOT:
        result =  ~input1;
        printf("Command executed : BNOT\n");
        break;
    case BXOR:
        result = input1^input2;
        printf("Command executed : BXOR\n");
        break;
    case ASGN:
        result = input1=input2;
        printf("Command executed : ASGN\n");
        break;
    case INC_OP1:
        result = input1++;
        printf("Command executed : INC_OP1\n");
        break;
    case INC_OP2:
        result = input2++;
        printf("Command executed : INC_OP2\n");
        break;
    default:
        result = -1;
    }
    return result;
}
//ALU function end here .................

//mux2x1 function start here .................
int mux2x1_1(int I0, int I1, int C)
{
    switch (C)
    {
    case 0:
        return I0;
        break;
    case 1:
        return I1;
        break;
    default:
        break;
    }
}
//mux2x1 function end here .................


int mux2x1_2(int In0, int In1, int CC)
{
    switch (CC)
    {
    case 0:
        return In0;
        break;
    case 1:
        return In1;
        break;
    default:
        break;
    }
}

struct //processor_control_unit
    {
        int e1;
        int e2;
        int e3;
        int e4;
        int e5;
    } CU_processor;

void Control_Unit(int e1, int e2, int e3, int e4, int e5)
{
    
struct CU_processorS1;

typedef CU_processor; 
}




int PC(int a)
{
    int a,b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    // local variables for input
    int count = 10;
    int r = 0;
    for ( r = 0; r < count; r++)
    {
        cmd = ADD;
        r = alu(cmd, a, b);
        printf("result = %d\n", r);
        return 0;
    }
    printf("The program counter is %d", r++);
}

