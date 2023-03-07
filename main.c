#include <stdio.h>

int func(int A[])
{
    int size=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<5;i++)
    {
        printf("%d",A[i]);
    }
}

int main(void)
{
    int A[]={1,2,3,4,5};
    func(&A);
}

