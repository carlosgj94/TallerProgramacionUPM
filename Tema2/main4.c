# include <stdio.h>
int main ()
{

int c1, c2, c3, c4;

scanf("%d/%d/%d", &c1, &c2, &c3);
printf("\n %d-%d-%d", c1, c2, (c3%100));
return 0;
}
