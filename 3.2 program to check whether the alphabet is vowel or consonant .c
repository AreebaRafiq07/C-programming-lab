#include<stdio.h>
int main(){
    char value;
    printf("enter the character = ");
    scanf("%c%c",&value,&value);
    if(value=='a'||value =='e'||value=='i'||value =='o'||value =='u'||value=='A'||value =='E'||value=='I'||value =='O'||value =='U')printf("vowel");
    else printf("constant");
    return 0;
}
