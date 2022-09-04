#include <stdio.h>

int main()
{
    int i, j, n = 0, count = 1;
    float a[200];
    printf("Enter a series of numbers : ");
    do
	{
		scanf("%f", &a[n]);
		n++;
	} while (getchar() != '\n');
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(a[j] == a[i]){
                count++;
            }
        }
        if(2*count > n - 1){
            break;
        }
    }
    (2*count > n) ? printf("%0.3f",a[i]) : printf("NIL");
    return 0;
}