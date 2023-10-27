#include <stdio.h>
void towerofhanoi(int n, char from_rod, char to_rod, char aux); // declaration
int main()
{
    int n;
    char a, b, c;
    printf("enter the number of disks\n");
    scanf("%d", &n);
    towerofhanoi(n, 'a', 'c', 'b');
    // calling
}
void towerofhanoi(int n, char from_rod, char to_rod, char aux)
{
    if (n <= 0)
    {
        printf("invalid no. of disk\n");
    }
    else if (n == 1)
    {
        printf("move the disk from %c to %c\n", from_rod, to_rod);
    }
    else
    {
        towerofhanoi(n - 1, from_rod, aux, to_rod);
        towerofhanoi(1, from_rod, to_rod, aux);
        towerofhanoi(n - 1, aux, to_rod, from_rod);
    }
}