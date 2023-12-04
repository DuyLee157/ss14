#include <stdio.h>
void print(int a){
    int *pointer = &a;
    printf("dia chi cua bien a la :%d\n",&a);
    printf("gia tri cua con tro khi chi vao a = %d\n");

}
int main(){
    int a;
    int *pointer = &a;
    printf("nhap gia tri cua a\n");
    scanf("%d",&a);

    printf("dia cho cua bien a la :%d",&a);
    printf("gia tri cua con tro khi chi vao a = %d",*pointer);

}