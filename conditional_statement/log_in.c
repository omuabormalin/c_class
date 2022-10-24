/*this code is to validate user name and password already saved in the data base and grant access if data matches and if not the program ends after 3 wrong attempts.*/
#include <stdio.h>
/**
 * main - hold the code for the entire proces
 * @A: variable to accept user na,me
 * @B: varioable to accept user password
 * @c: variable holding the user name in the system already
 * @d: variable holding the user password inm the system already
 */
int main()
{
	int c, A;
	int d, B;
	c = 1234;
	d = 1212;
	   printf("Entre username: ");
	      scanf("%d", &A);
	       printf("Enter password: ");
	          scanf("%d", &B);
		   if(A == c && B == d)
			    {
				     printf("welcome %d", c);
				      }
		    else if(A != c)
			     {
				      printf("wrong username");
				       }
		     else if(B != d)
			      {
				       printf("wrong password");
				        }
		      }
