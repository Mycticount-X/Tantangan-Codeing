#include <stdio.h>
#include <string.h>

void bubbleSort(int arr[]) {
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++) {
        int arr[25], sum = 0;
        for (int j = 0; j < 25; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        getchar();

        bubbleSort(arr);

        int data1 = arr[0] / 2;
        int data2 = arr[1] - data1;
        int data5 = arr[24] / 2;
        int data4 = arr[23] - data5;
        int data3 = (sum - ((10 * data1) + (10 * data2) + (10 * data4) + (10 * data5))) / 10;

        printf("Case #%d: %d %d %d %d %d\n", i + 1, data1, data2, data3, data4, data5);
    }

    return 0;
}
