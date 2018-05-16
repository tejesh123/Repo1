#include<stdio.h>
int main()
{
    int i,j,N;
    //int arr[N];
    
    int min,max;
    printf("Enter the size of array:");
    scanf("%d",&N);
    
    
    int arr[N],temp;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<N;i++)
    {
    	printf("%d ",arr[i]);
	}
    //int max=arr[0];
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
           if(arr[i]>arr[j])
           {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
           }
        }
    }
    
    for(i=0;i<N;i++)
    {
    	printf("\n %d ",arr[i]);
	}
    
   max=arr[N-1];
    
  min=arr[0];
  
  int diff=max-min;
  
  printf("\n %d",diff);
    
    
}
