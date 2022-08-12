#include <stdio.h>

int main()
{
    int a[100];
    int val,n, low, mid, high;
    
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    
    printf("Enter %d array elements:", n);
     for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        
    printf("\n Enter the element you want to search: ");
    scanf("%d", &val);
   
   printf("\n Array = "); 
   for(int i=0; i<n; i++)
        printf("%d  ", a[i]);
        
 // Binary search   
    
     low=0;
     high=n-1;
     
    while(low<=high )  
    {
        mid = (low+high)/2;
        
        if(val==a[mid])
        {
            printf("\n Element Found at location %d", mid);
            break;
        }
        else if(val<a[mid])
            high=mid-1;
            
        else if( val>a[mid])
           low=mid+1;
       
    }
    
    if(low>high)
       printf("\n Element not found");
 
}
