#include<stdio.h>
void displayAges(short int* ages,int length,int index)
{
    if(index>=length){
        return;
    }
    printf("%d\t", ages[index]);
    displayAges(ages,5,index+1);
}
void travelBackwardAges(short int* ages,int length,int index)
{
    if(index>=length){
        return;
    }
    travelBackwardAges(ages,5,index+1);
    printf("%d\t",ages[index]);
}
int main()
{
    short int ages[]={45,23,58,67,18};
    displayAges(ages,5,0);
    printf("\n");
    travelBackwardAges(ages,5,0);
    return 0;
}
