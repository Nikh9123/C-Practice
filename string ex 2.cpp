#include <stdio.h>
#include<string.h>
main ()
{
 char name[]={'A', 'j', 'a', 'y', '\0'};
 char name2[]= "Karan";
 char name3[20];
 scanf("%s", name3);
 printf("\n%s and size = %d and length = %d", name, sizeof(name), strlen(name));
 printf("\n%s and size = %d and length = %d", name2, sizeof(name2), strlen(name2));
 printf("\n%s and size = %d and length = %d", name3, sizeof(name3), strlen(name3));
}

