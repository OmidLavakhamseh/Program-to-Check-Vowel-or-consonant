#include <stdio.h> // being enen or odd
int main(){
char letter;
printf("Give me the letter:");
scanf("%c",&letter);

if (letter=='a'||letter=='e'||letter=='o'||letter=='u'||letter=='i'){
    printf("%c is vowel", letter);
}
else{
    printf("%c is constant",letter);
}


return 0;

}