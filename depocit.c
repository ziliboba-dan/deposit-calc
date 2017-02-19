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
float calc(int day, int summa)
{	
	if(day < 31) 
		return summa * 0.9;
	if(summa < 100000) {
		if((day > 30) && (day < 121))
			return summa * 1.02;

		if((day > 120) && (day < 241))
			return summa * 1.06;

		if((day > 240) && (day < 366))
			return summa * 1.12;
	}
	if(summa >= 100000) {
		if((day > 30) && (day < 121))
			return summa * 1.03;

		if((day > 120) && (day < 241))
			return summa * 1.08;

		if((day > 240) && (day < 366))
			return summa * 1.15;
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
	printf("The deposit amount at the time of expiry: %.3f\n", calc(day, summa));	
	
	return 0;
}
