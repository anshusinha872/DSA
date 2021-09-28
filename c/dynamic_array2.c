#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number_of_shelves;
    int number_of_query;
    int **total_number_of_books;
    int *number_of_books;
    printf("Enter the total number of shelves: ");
    scanf("%d", &number_of_shelves);
    printf("Enter the number of quey: ");
    scanf("%d", &number_of_query);
    number_of_books = (int *)calloc(number_of_shelves, sizeof(int));
    total_number_of_books = (int **)malloc(number_of_shelves * sizeof(int *));
    for (int i = 0; i < number_of_shelves; i++)
    {
        total_number_of_books[i] = calloc(1100, sizeof(int));
    }
    for (int j = 0; j < number_of_query; j++)
    {
        int choice;
        printf("Enter the choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int shelf, book;
            printf("Enter row and book: ");
            scanf("%d %d", &shelf, &book);
            number_of_books[shelf]++;
            int *arr = total_number_of_books[shelf];
            while (*arr != 0)
                *arr++;
            *arr = book;
        }
        else if (choice == 2)
        {
            printf("Enter the shelf and book: ");
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_books[x][y]);
        }
        else
        {
            printf("Enter the shelf: ");
            int x;
            scanf("%d", &x);
            printf("%d\n", number_of_books[x]);
        }
    }
    return 0;
}