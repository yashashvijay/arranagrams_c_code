#include <stdio.h>
#include <string.h>

int main()
{
    int size;
    char a[2][10] = {"tea","cop"};
    char b[2][10] = {"eat","cot"};
    for(int i=0;i<2;i++)
    {
        int j=0,add_a=0,add_b=0;
        int size_a = strlen(a[i]);
        int size_b = strlen(b[i]);
        if(size_a!=size_b)
        {
            printf("Not match");
        }
        else
        {
            while(j!=size_a)
            {
                add_a=a[i][j]+add_a;
                add_b=b[i][j]+add_b;
                j++;
            }
            if(add_a==add_b)
            printf("Same\n");
            else
            printf("Diff\n");
            
        }
    }
    return 0;
}
