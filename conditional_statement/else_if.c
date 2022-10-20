int main (void)
{
	float mark;

	printf("Enter your mark");
	scanf("%f", &mark);

	if (mark >= 70 && mark <= 100)
		printf("A");
	else if (mark >= 60 && mark <= 69 )
		printf("B");
	else if (mark >= 50 && mark <= 59)
		printf("C");
	else if (mark >= 40 && mark <= 49)
		printf("D");
	else if (mark >= 30 && mark <= 39)
		printf("E");
	else if (mark >= 0 && mark <= 29)
		printf("F");
	else
		    printf("no score found");
	printf("\nThis is your grade for the entred score");
}
