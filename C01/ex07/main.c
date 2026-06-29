#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int *a;
    int *b;
    int tmp;
    int counter1;
    int counter2;

    counter1 = 0;
    counter2 = size -1;
    while (counter1 < counter2)
    {
        a = tab + counter1;
        b = tab + counter2;
        tmp = *a;
        *a = *b;
        *b = tmp;
        counter1++;
        counter2--;
    }
}

int main(){
    int a[5];
    int b;

    for (int i=0 ; i<5 ; i++){

        printf("Enter number %d: ", i + 1);
        scanf("%d" ,&b);
        a[i] = b;
    }

    for (int i= 0 ; i<5;i++){
        printf("T[%d] = %d\n",i,a[i]);
    }
    ft_rev_int_tab(a,5);

    for (int i= 0 ; i<5;i++){
        printf("T[%d] = %d\n",i,a[i]);
    }
    return 0;
}

