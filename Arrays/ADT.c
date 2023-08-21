/*IMPLEMENTING ARRAY AS AN ADT / DYNAMIC ARRAY 
ADT - Abstract Data Type : Abstract word means where the implementation is hidden details are hidden. Working is known but how the working is done is hidden.
Abstract data type is set of values and set of operations where it shows/mentions the operations but how the operations are done is hidden
In this program i am gonna create my array define an implement my own functions.

Algorithm :
Step 1 : Define structure my_array that contains info about array
Step 2: Create a create_arr function that will initiaze the values . Create_arr uses pointer to structure so that it can access info and initialize the array structure
Step 3 : Set_Val() is used to populate the array elements. Read and store the elements.
Step 4 : get_val() is used to print the elements in my created array structure
Step 5 : all the functions require pointer to array for access.
*/
#include <stdio.h>
#include <stdlib.h>
struct my_array
{
    int total_size;
    int used_size;
    int *ptr;
};
void create_array(struct my_array * a , int size, int utilized){
a->total_size=size;
a->used_size=utilized;
a->ptr=(int *)malloc(size * sizeof(int));
}
void set_val(struct my_array * a){
for (int i = 0; i < a->used_size; i++)
{
    printf("Enter the elements: ", i);
    scanf("%d",&a->ptr[i]);
}
}

void get_val(struct my_array * a){
for (int i = 0; i < a->used_size; i++)
{
    printf("\n%d", a->ptr[i]);
}

}

int main()
{
    struct my_array marks;
    create_array(&marks,20,5);
     set_val(&marks);
    get_val(&marks);
   
    return 0;
}