#include <stdio.h>

int main(){
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int end = sizeof(array) / sizeof(array[0]),
        start = 0,
        middle = end / 2,
        needle = 3;

    while (array[middle] != needle && middle > start){
        if(array[middle] > needle){
            end = middle - 1; 
        } else {
            start = middle + 1;
        }

        middle = (start + end) / 2;
    }

    printf("%d", array[middle]);
}