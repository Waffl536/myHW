#include <iostream>
#include <cmath>
using namespace std;

void draw_rect(int hight, int length)
{
    for (int i = 1; i <= hight; i++)
    {
        if (i == 1)
        {
            for (int y= 1; y <= length; y++) { cout << "# ";}             
        }
        else if (i == hight)
        {
            for (int y= 1; y <= length; y++) { cout << "# ";}            
        }
        else 
        {
            for (int y= 1; y <= length; y++) 
            {
                if (y == 1) { cout << "# "; }
                else if (y == length) { cout << "# "; }
                else { cout << "+ "; }
            }
        }
        cout << "\n";
    }
    
}

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
    
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}


int main()
{
    cout << "hight: ";
    int a {};
    cin >> a;
    cout << "length: ";
    int b {};
    cin >> b;
    draw_rect(a, b);

    cout<<"\nnumber: ";
    cin >> a;
    cout<<"number's factorial: " << factorial(a);

    cout << "\n\nEnter a number: ";
    cin >> a;

    if (isPrime(a)) {
        cout << a << " is a prime number.";
    } else {
        cout << a << " is not a prime number.";
    }
}