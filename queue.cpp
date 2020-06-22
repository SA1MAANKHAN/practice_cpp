#include<iostream>
#include<conio.h>
#define MAX 10
using namespace std;
int QUEUE[max],front=-1,rear=-1;
void insert(int queue[],int ele)
{
    if(rear==-1)
    {
        front=rear=0;
        queue[rear]=ele;
    }
    else if(rear==max-1)
    {
        printf("overflow");
    }
    else
    {
        rear++;
        queue[rear]=ele;
    }
    printf("Item inserted");
}
