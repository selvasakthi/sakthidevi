#include <iostream>
int main()
{
  int num1, num2, k, num, digit, sum;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(k= num1; k<= num2; k++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == k)
        {
            cout << k << endl;
        }
  }

  return 0;
}
