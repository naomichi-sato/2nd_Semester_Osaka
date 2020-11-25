
#include <iostream>
#include "Employee.h"

int main()
{
	Employee satou( Employee::POST::STAFF );
	Employee deguchi( Employee::POST::PRESIDENT );

	satou.ShowPost();
	deguchi.ShowPost();

	if( satou > deguchi )
	{
		printf("satouさんの方が偉い\n");
	}
	else
	{
		printf("deguchiさんの方が偉い……かも？\n");
	}

	return 0;
}

