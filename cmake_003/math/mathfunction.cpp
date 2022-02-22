
double power(double base, int exponent)
{
	decltype(base) result = base;
	
	if (0 == exponent)
		return result = 1;
	
	for (int i=1;i<exponent;++i)
		result *= base;
	
	return result;
}
