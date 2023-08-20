#include <stdio.h>
int main(){

    char name[20],*result;
    int birth;
    printf("Name : ");
    scanf(" %s",&name);
    printf("Age: ");
    scanf(" %d",&birth);

    int age = 2566 - birth;
    if (age<= 19)
    {
        result = "Child";
    }
    else if (age<= 54)
        {
            result = "Adult";
        }
            else{
                result = "Old";
            }

    printf("name = %s Age = %d result = %s",name,age,result);
    return 0;
}
