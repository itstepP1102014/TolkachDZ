#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void outputArray(const int *a, int n);
void generateArray(int *a, int n, int up, int down);

void bubleSort(int *a, int n, bool (*less)(int,int));
int sumOfDigit(int a)
{
    a = a > 0? a : -a;
    int result = 0;
    while(a)
    {
        result += a % 10;
        a /= 10;
    }
    return result;
}
bool less(int a, int b)
{
    return sumOfDigit(a) > sumOfDigit(b);
}

int main()
{
    srand(time(NULL));
    int *array = NULL;
    array = (int*)malloc(10*sizeof(int));
    generateArray(array, 10, 0, 15);
    outputArray(array, 10);
    bubleSort(array, 10, less);
    outputArray(array, 10);
    free(array);
    array = NULL;
    return 0;
}

void outputArray(const int *a, int n)
{
    for(int i=0; i<n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

void generateArray(int *a, int n, int up, int down)
{
    for (int i = 0; i <n; ++i)
        a[i] = rand() % (up - down +1) + down;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubleSort(int *a, int n, bool (*less)(int,int))
{
    for(int i = 1;i < n; ++i)
        for(int j = 0; j < n - i; ++j)
            if (less(a[j + 1], a[j]))
                swap(&a[j], &a[j +1]);
}

typedef double (*MathFunc)(double);

double solveByNewton(double x0; double eps,
                     MathFunc f, MathFunc df);
