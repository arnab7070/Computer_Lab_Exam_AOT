//C code to insert/delete any value to a given position in an array
#include<stdio.h>

int main(){

	int n;
	printf("Enter how many elements you want to store in array: ");
    scanf("%d",&n);
	int arr[2*n];
    printf("Now enter the elements of the array:\n");
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
    int work;
    printf("For insert element press 1 and for delete press 2: ");
    scanf("%d",&work);

    switch (work)
    {
    case 1:
        int index;
        printf("Enter the index value: ");
        scanf("%d",&index); //at what index insert an element
        int value; //which value you want to store
        printf("Enter the value you want to insert: ");
        scanf("%d",&value);
        if(index==n){
            arr[index] = value;
        }
        else if(index>n){
            printf("Error!!");
            return 0;
        }
        else{
            for (int k = 0; k < n; k++)
            {
                if(k==index){

                    for(int j = n-1; j >= index; j--){
                        arr[j+1] = arr[j];
                    }

                    arr[index] = value;
                    break;
                }
            }
        }
        //for showing the output
        for (int i = 0; i < n+1; ++i)
	    {
		printf("%d ",arr[i]);
	    }

        break;  
    case 2: 
        int del_index;
        printf("Enter the index value: ");
        scanf("%d",&del_index); //at what index delete an element
        // if(del_index==n-1){
        //     n--;
        // }
        if(del_index>=n){
            printf("Error!! No element is here to delete\n");
            return 0;
        }
        for (int i = del_index; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;    
        //for showing the output
        for (int i = 0; i < n; ++i)
	    {
		printf("%d ",arr[i]);
	    }
        break;
    }












	
	

	return 0;
}