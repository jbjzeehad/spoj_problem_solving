
// @ Jbj Zeehad

#include <stdio.h>
int main()
{
    bool a = true;
    int num;
    while (a)
    {
        scanf("%d", &num);
        if (num == 42)
        {
            break;
        }
        printf("%d\n", num);
    }
    return 0;
}