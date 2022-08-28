#include<stdio.h>

void printMaxEvents(int s[], int f[], int n)
{
	int i, j;
	printf ("Following events are selected: ");
	i = 0;
	printf("%d ", i+1);
	for (j = 1; j < n; j++)
	{
	if (s[j] >= f[i])
	{
		printf ("%d ", j+1);
		i = j;
	}
	}
}

int main()
{
	int n,i;
    printf("Total number of events :");
    scanf("%d",&n);
    int s[n],f[n];
    printf("s[] --> An array that contains start time of all events\n");
    printf("events should already sorted according to their finish time\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    printf("f[] --> An array that contains finish time of all events\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }
	printMaxEvents(s, f, n);
	return 0;
}

//test case :
//Input = 1, 3, 0, 5, 8, 5  2, 4, 6, 7, 9, 9
//Output = 1,2,4,5