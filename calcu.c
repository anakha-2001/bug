#include <stdio.h>
int main()
{
	char Op;
	float n1, n2, result = 0;
	printf("\nEnter an Operator (+, -, *, /) :");
  	scanf("%c", &Op);
	printf("\nEnter the Values for two Operands:n1 and n2:");
  	scanf("%f%f", &n1, &n2);
  	switch(Op)
  	{
  		case '+':
  			result = n1 + n2;
  			break;
  		case '-':
  			result = n1 - n2;
  			break;  			
  		case '*':
  			result = n1 * n2;
  			break;
  		case '/':
  			result = n1 / n2;
  			break;
		default:
			printf("\nInvalid Operator");
			break;				    			
	}
	printf("\n The result of %.2f %c %.2f  = %.2f",n1,Op,n2,result);
  	return 0;
}
