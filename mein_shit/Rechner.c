#include <stdio.h>

long a, b, e;

long main()

{

	printf("Eine Zahl, bitte.\n");
	scanf("%d",&a);

	printf("Noch eine Zahl, bitte.\n");
	scanf("%d",&b);

e = a + b;

printf("%d addiert mit %d ergibt %d.\n", a, b, e);

return 0;
}
