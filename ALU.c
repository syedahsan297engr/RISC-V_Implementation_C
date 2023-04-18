// Objective: 32 bit ALU Design

// Preprocessor Section
#include <stdio.h> // <> means use standard library path to locate stdio.h
#include <math.h>
// Enumerations
enum alucmd {ADD,SUB,MUL,DIV,REM,AND,OR,NOT,SRIGHT,SLEFT,BAND,BOR,BNOT,BXOR,ASGN,INC_OP1,INC_OP2};               // Type definition
enum alucmd cmd; // Variable of type enum alucmd

// Global variables section
int alu(enum alucmd opcode, int input1, int input2);

// Function prototype section
//int main(void);

// Function definition
int main(void)
{
    printf("\t*******  ALU by using Enumeration *******\n");
    int  op1, op2;
    printf("Enter the op1\n");
    scanf("%d", &op1);
    printf("Enter the op2\n");
    scanf("%d", &op2);
    printf("Enter any number b/w from 0 to 16 for performing certain operation\n");
    printf("Enter the operation you want to perform\n");
    scanf("%d", &cmd); //cmd predefined as in enumeration
    if (cmd>=17){
        printf("Error: Your ALU does not support it\n Enter value b/w [0-16]\n_____________");
    }
    else
    {
        printf("______OUTPUT: %d______", alu(cmd, op1, op2));
    }
    return 0;
}

// Function alu
// Emulates an Arithematic Logic Unit
// Input data type: 3, enum alucmd, int, int
// Output data type: int
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
