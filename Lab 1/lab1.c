// Bruce Phommaly
// bypxtd
// Lab 1
// 01/27/15
// starting1050

#include<stdio.h>

int main(void)
{
		int x, y, z, sum, d, s;
		float time;
		
		printf("Enter the first number: \n");
		scanf("%d", &x);

		printf("Enter the second number: \n");
		scanf("%d", &y);

		printf("Enter the third number: \n");
		scanf("%d", &z);

		sum = x + y + z;
		
		printf("Sum of the three numbers is %d\n", sum, x + y + z);

// Bonus
//Can't get the right flight time conversion
		printf("Enter the distance (meters): \n");
		scanf("%d", &d);
		
		if (d <= 0)
		{
			printf("Distance should be a positive number \n");
			printf("Enter the distance again: \n");
			scanf("%d", &d);
		}

		printf("Enter the speed (miles/hr): \n");
		scanf("%d", &s);

		if (s <= 0)
		{
			printf("Speed should be a positive number \n");
			printf("Enter the speed again: \n");
			scanf("%d", &s);
		}

		time = d / s;

		printf("Flight time of the plane is %d seconds \n", time, d / s);

		return 0;

}
