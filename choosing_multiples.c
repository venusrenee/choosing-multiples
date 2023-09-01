#include <stdio.h>

int main()
{
	int x = 0;
	int count;
	int n;
		printf("Please enter a number: ");
		scanf("%d", &n);
	do {
		printf("Do you want to count in multiples of 2, 3, or 5: ");
		scanf("%d", &count);
			if(count != 2 && count != 3 && count !=5){
		printf("Error: Invalid number. Please try again.\n");
			}
	} while(count != 2 && count != 3 && count !=5);
	
	if(count == 2 || count == 3 || count == 5){
		while(x < n){
		printf("%d\n", x);
		x += count;
	}
	}
return 0;
}