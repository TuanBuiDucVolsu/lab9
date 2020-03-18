#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double Dec2Bin(double decimalNumber);
int BinToDec(long long binaryNumber);
int main(int argc, char *argv[]) {
	double decimalNumber;
    printf("input Dec: ");
    scanf("%lf", &decimalNumber);
    printf("Bin = %lli", Dec2Bin(decimalNumber));
    
    long long binaryNumber;
    printf("\nInputBin: ");
    scanf("%lli", &binaryNumber);
    printf("Dec = %d", BinToDec(binaryNumber));
	return 0;
}
double Dec2Bin(double decimalNumber)
{
	long double binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2.0) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    
    return binaryNumber;
}
int BinToDec(long long binaryNumber)
{
	int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    double number = 0;
    return decNumber;
}
