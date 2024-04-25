#include<stdio.h>

int main(){

    int age, salary;

    printf("Enter Age & Salary: ");
    scanf("%d %d", &age, &salary);

    if(age>50)
    {
        if(salary<6000)
        {
            printf("Your new salary is:%d", (salary+1000));
        }
        
    }

return 0;

}