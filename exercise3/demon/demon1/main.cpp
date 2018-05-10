#include <stdio.h>
#include <stdlib.h>

#include <Mymath/add.h>
#include <Mymath/sub.h>

int main()
{
	printf("1.2 + 3.4 = %f\n", add(1.2, 3.4));
	printf("1.2 - 3.4 = %f\n", sub(1.2, 3.4));
	
	system("pause");
	return 0;
}