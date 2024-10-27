#include <stdio.h>
#define MAX 50
int main()
{
    int N,arr[MAX],i,j,freq[MAX];

    printf("Enter number of elements:\t");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        printf("Arr[%d]: ",i);
        scanf("%d",&arr[i]);
        freq[i] = 1;
    }


    for(i=0;i<N;i++)
    {
        if(freq[i]==0)
           continue;
        for(j=i+1;j<N;j++)
        {
           if(freq[j]==0)
            continue;

            if(arr[i]==arr[j])
            {
                freq[i]++;
                freq[j]=0;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(freq[i]!=0)
           printf("Freq of %d is this times %d\n",arr[i],freq[i]);
    }


    return 0;
}