#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments
 * @n: number of parameters
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lt;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lt, n);
	for (i = 0; i < n; i++)
		sum += va_arg(lt, int);

	va_end(lt);
	return (sum);

}
