// Write a menu driven program in c language to read an array of size n and perform the
// following operations.
// void readArray() : read values to the array
// void displayarray() : to display the array
// int highestnumber() : to returns the highest number in the array.
// int smallestnumber() : to returns the smallest number in the array.
// int repeatednumbers(int a) : returns 1 if the element a repeat in the array else 0
// int repeatedelementcount(int a) : returns the count of element a repeated in the array
// void showrepeatednumbers() : to show the repeated numbers with count.


#include <stdio.h>
#include <stdlib.h>
int main()
{
            int n, i, a[100], choice, num, count = 0;
            printf("enter the size of the array");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("enter the element %d", i + 1);
                scanf("%d", a[i]);
            }
            while (1)
            {
                printf("enter your choice\n");
                printf("1.read array\n");
                printf("2.display array\n");
                printf("3.highest number\n");
                printf("4.smallest number\n ");
                printf("5.repeated number\n");
                printf("6.repeated element count\n");
                printf("7.show repeated numbers\n");
                printf("8.exit\n");
                scanf("%d", &choice);
                switch (choice)
                {
                    case 1:
                    readArray();
                    break;
                    case 2:
                    displayArray();
                    break;
                    case 3;
                    printf("highest number is %d", highestNumber());
                    break;
                    printf("smallest number is %d", smallestNumber());
                    break;
                    case 5:
                    printf("enter the number to check\n");
                    scanf("%d", &num);
                    if (repeatedNumbers(num) == 1)
                    {
                        printf("%d is repeated\n", num)
                    }
                    else
                    {
                        printf("%d is not repeated\n", num)
                    }
                    break;
                    case 6:
                    printf("enter the number to check\n");
                    scanf("%d", &num);
                    printf("count of %d is %d", num, repeatedElementCount(num));
                    break;
                    case 7:
                    printf("repeated numbers are\n");
                    displayRepeatedNumbers();
                    break;
                    case 8:
                    exit(0);
                    break;
                    default:
                    printf("invalid choice\n");
                    break;
                }
                return 0
            }
            int readArray()
            {
                printf("enter the size of array\n");
                scanf("%d", size)
                int arr[size]:
                for (int i = 0; i < size; i++)
                {
                    printf("enter the element %d\n", i + 1);
                    scanf("%d", &arr[i]);
                }
                return arr;
            }
            int displayArray()
            {
                int arr[size];
                arr = readArray();
                for (int i = 0; i < size; i++)

            }
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            return 0;

        int repeatedElementCount(int num)
        {
            int count = 0;
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == num)
                {
                    count++;
                        }        
            }
            return count;
        }
        int displayRepeatedNumbers()
        {
            int arr[size];
            arr = readArray();
            for (int i = 0; i < size; i++)
            {
                if (repeatedElementCount(arr[i]) > 1)
                {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
            return 0;
        }

}
        


        


    
