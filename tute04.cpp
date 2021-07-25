/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;

  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
int i ;
long A = 1;
for (i=no; i>=1; i--)
{
  A = A*i;
}
return A;
}
long nCr(int n, int r)
{
int i , F;
long NCR;
int B=1;
F=Factorial(n);
for(i=r;i>=1;i--)
{
  B=B*i;
}
int C=1;
for(i=n-r;i>=1;i--)
{
  C=C*i;
}
NCR=F/B*C;
return NCR;
}