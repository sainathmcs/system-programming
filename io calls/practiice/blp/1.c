#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
    write(1, "hello world\n",20);
    write(2, "hello world\n",20);
}