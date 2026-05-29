#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    float weight;
    float value;
    float ratio;
} Item;

/* Function to calculate value/weight ratio */
void calculateRatio(Item items[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        items[i].ratio = items[i].value / items[i].weight;
    }
}

/* Comparator function for sorting */
int compare(const void *a, const void *b)
{
    Item *itemA = (Item *)a;
    Item *itemB = (Item *)b;

    if(itemB->ratio > itemA->ratio)
        return 1;

    else if(itemB->ratio < itemA->ratio)
        return -1;

    return 0;
}

/* Fractional Knapsack Function */
float fractionalKnapsack(Item items[], int n, float capacity)
{
    float totalValue = 0.0;
    float remaining = capacity;

    int i;

    calculateRatio(items, n);

    qsort(items, n, sizeof(Item), compare);

    printf("\n--- Fractional Knapsack Solution ---\n\n");

    for(i = 0; i < n; i++)
    {
        if(remaining <= 0)
            break;

        if(items[i].weight <= remaining)
        {
            totalValue += items[i].value;
            remaining -= items[i].weight;

            printf("Took full item %d (w=%.1f, v=%.1f)\n",
                   i + 1,
                   items[i].weight,
                   items[i].value);
        }
        else
        {
            float fraction = remaining / items[i].weight;

            totalValue += fraction * items[i].value;

            printf("Took %.2f%% of item %d (w=%.1f, v=%.1f)\n",
                   fraction * 100,
                   i + 1,
                   items[i].weight,
                   items[i].value);

            remaining = 0;
        }
    }

    return totalValue;
}

int main()
{
    int n, i;
    float capacity;

    Item items[MAX];

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    for(i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter weight: ");
        scanf("%f", &items[i].weight);

        printf("Enter value: ");
        scanf("%f", &items[i].value);
    }

    float maxValue = fractionalKnapsack(items, n, capacity);

    printf("\nMaximum Value in Knapsack = %.2f\n", maxValue);

    return 0;
}
