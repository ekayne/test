#include <stdio.h>

long a, b, e;

long main()

{

	printf("Eine Zahl, bitte.\n");
	scanf("%ld",&a);

	printf("Noch eine Zahl, bitte.\n");
	scanf("%ld",&b);

e = a + b;

printf("%ld addiert mit %ld ergibt %ld.\n", a, b, e);

return 0;
}
