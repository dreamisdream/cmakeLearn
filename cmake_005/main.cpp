#include "mathfunction.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	double base;
	int exponent;
	while(printf("please input a base and a exponent\n")){
		scanf("%lf%d",&base,&exponent);
		printf("%g ^ %d = %g\n",base,exponent,power(base,exponent));
	}

    return 0;
}
