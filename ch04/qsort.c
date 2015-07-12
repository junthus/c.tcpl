#include <stdio.h>

void swap(int v[], int i, int j);
void printArr(int arr[], int left, int right);
void qsort(int v[], int left, int right);

static int test[] = {6,3,7,1,2,8,14, 27, 57,3,76,2,7,4,25};
static int len = sizeof(test)/sizeof(int) - 1;

int main()
{

    printArr(test, 0, len);
    qsort(test, 0, len);
    printArr(test, 0, len);

    return 0;
}

void qsort(int v[], int left, int right)
{
    int pivot, j, i;


    printf("IN >> left:%d, right:%d, ", left, right);
    printArr(v, left, right);

    if (left < right) {
        pivot = left;
        i = left;
        j = right;

        printf("기준 : (%d번)%d\n", pivot, v[pivot]);

        while(i < j) {
            while(v[i] <= v[pivot] && i < right) {
                i++;
            }

            while(v[j] > v[pivot]) {
                j--;
            }

            if (i < j) {
                printf("switch: (%d번)%d <-> (%d번)%d >> ", i, v[i], j, v[j]);
                swap(v, i, j);
                printArr(v, left, right);
            }
        }

        printf("기준변경: (%d번)%d <-> (%d번)%d\n", pivot, v[pivot], j, v[j]);
        swap(v, pivot, j);

        printf("OUT >> ");
        printArr(v, left, right);


        printf("\n");


        qsort(v, left, j-1);
        qsort(v, j+1, right);
    }
}

void swap(int v[], int i, int j)
{
    if (i == j) {
        return;
    }

    int tmp;

    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void printArr(int arr[], int left, int right) {
    for (int i = left; i <= right; ++i) {
       printf("|%d", arr[i]);
    }
    printf("|\n");
}