
#include <stdio.h>  
  
void bubble_sort(int arr[], int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]) {  
        int temp = arr[j];  
        arr[j] = arr[j + 1];  
        arr[j + 1] = temp;  
      }  
    }  
  }  
}  
int main() {  
  int arr[] = {64, 34, 25, 12, 22, 11, 90};  
  int n = sizeof(arr) / sizeof(arr[0]);  
  bubble_sort(arr, n);  
  printf("Sorted array: ");  
  for (int i = 0; i < n; i++) {  
    printf("%d ", arr[i]);  
  }  
  return 0;  
}  


  //Another code
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a[20], n, i, j, temp, b, k;

//     printf("Enter the size of array:");
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         printf("Enter the Elements:");
//         scanf("%d", a[i]);
//     }
// }

// for (b=0, b<=n-1, b++){
//     for(k=0, k<=n-1,  k++)
//     {
//         if(a[k] > a[k+1]){
//             temp = a[k];
//             a[k]= a[k+1];
//             a[k+1]= temp;
//         }
//     }
// }