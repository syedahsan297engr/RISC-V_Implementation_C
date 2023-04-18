#include <stdio.h>

int mux2x1(int I0, int I1, int C);
int main(void);

int main(void)
{ 
    int in0, in1, Control, result;
    printf("Enter in0 = ");
    scanf("%d", &in0);
    printf("Enter in1 = ");
    scanf("%d", &in1);

    printf("Enter control input = ");
    scanf("%d", &Control);

    if (Control >=2 || Control < 0)
    {
        printf("Enter Valid Input From [0-1]");
    }
    else
    {
       result = mux2x1(in0, in1, Control);
       printf("OUTPUT = %d ", result);
    }    
}

int mux2x1(int I0, int I1, int C)
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