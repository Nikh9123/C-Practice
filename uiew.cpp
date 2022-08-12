 #include <stdio.h>

int main()
{
    int ar[10]={12,43,56,21,45,98,4,67,3,43};
    int t;
    
for(int j=0; j<9; j++)  // bubble sort
{
    for(int i=0; i<9; i++)
    {
        if(ar[i]>ar[i+1])
        {
            t=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=t;
        }
    }
}
  
  printf("\n Sorted Array = ");
  for(int i=0; i<10; i++)
    {
         printf("%d  ", ar[i]);
    }
}
