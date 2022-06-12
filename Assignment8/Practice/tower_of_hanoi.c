//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h> 
int counter = 0;
void move(int n, char source, char helper, char destination)
{
  //base case
  if(n == 0)
    return; 
  //incrementing the counter
  counter++;
  //recursive case
  //move N - 1 disks to the helper 
  move(n - 1, source, destination, helper);
  printf("Shift disk %d from %c to %c\n", n,source, destination);
  move(n - 1, helper, source, destination);
}
int main()
{
  int n;
  printf("Enter the number of disks :- ");
  scanf("%d", &n); 
  move(n, 'A', 'C', 'B');
  printf("Total number of iterations required are: %d\n", counter); 
  return 0;
}
