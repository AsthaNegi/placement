#include<bits/stdc++.h>
using namespace std;


// Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number. Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.

bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}



int main(){

int num;
cin>>num;

if(ArmstrongNumber(num)){

cout<<"true";
}
else{
    cout<<"false";
}


return 0;
}