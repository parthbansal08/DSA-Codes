//program to find whether an item is in the array or not
#include <stdio.h>

int main_1_3()
{
int i,pos=-1,item,m[10],n;
printf("Enter no of elements in an array: ");
  scanf("%d",&n);

    printf("Enter the integers of array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&m[i]);
    }
    printf("Enter item that needs to be searched:\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(m[i]==item)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1) 
    printf("Item is not present.\n");
    else
    printf("item is present at position %d\n",pos+1);
    return 0;
}