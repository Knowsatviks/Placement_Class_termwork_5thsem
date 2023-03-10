#include <stdio.h>
//Satvik MIttal (2017548)
void bubbleSort(int arr[], int size) {  // sorting function
  for (int j = 0; j < size - 1; ++j) {

    int flag = 0;

    for (int i = 0; i < size - j - 1; ++i) {

      if (arr[i] > arr[i + 1]) {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        flag = 1;
      }
    }

    if (flag == 0)
      break;
  }
}

void display(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

int main() { // main function or driver function
  int arr[] = {-2, 45, 0, 11, -9};
 printf("Elements before Sorting:\n");
  display(arr, size);

  int size = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, size);
 printf("Elements after Sorting:\n");
  display(arr, size);
}
