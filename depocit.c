#include <stdio.h>

int check(int day, int summa)
{	
	if((day > 365) || (day < 0)) {
		return -1;
	}
	if(summa < 10000) {
		return -1;
	}
	return 0;
}
int main()
{
	int day, summa, select;
	
	printf("Enter the term of the deposit: ");
	scanf("%d", &day);

	printf("Enter the deposit amount: ");
	scanf("%d", &summa);

	while(check(day, summa) == -1) {
		printf("Data is entered incorrectly\n[1]re-enter\n[2]exit\n");
		scanf("%d", &select);

		if(select == 1) {
			printf("Enter the term of the deposit: ");
			scanf("%d", &day);

			printf("Enter the deposit amount: ");
			scanf("%d", &summa);
		}
		else return 0;
	}
			
	return 0;
}
