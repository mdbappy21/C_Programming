#include <stdio.h>

int calculateMode(int arr[], int n){
    int frequency[101] = {0};

    for (int i = 0; i < n; ++i)
        frequency[arr[i]]++;

    int mode = 1;
    int maxFrequency = frequency[1];

    for (int i = 2; i <= 100; ++i){
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            mode = i;
        }
    }

    return mode;
}

void main(){
    int n;
    printf("Enter Array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array of %d element : ",n);
    for(int j=0; j<n; j++)
        scanf("%d",&arr[j]);
    int mode=calculateMode(arr,n);

    printf("The mode is : %d\n",mode);

}
