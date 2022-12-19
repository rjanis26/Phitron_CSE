// GCD of 2 numbers is calculated at a time
int gcd(int a, int b) 
{
    int i;
    /*
        a is the smallest of the two numbers 
        of which GCD is to be calculated
    */
    for(i = a; i >= 1; i--) 
    {
        // Greatest number that divides both the numbers
        if(a%i == 0 && b%i == 0) 
            break;  // exits the loop
    }
    return i;
}
