#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    scanf("%s", &str);

    int l= strlen(str);
    int count1=0, count2=0, count3=0;

    if(l==1){
            if(str[0]>='a' && str[0] <='z'){
                 str[0]=str[0]-32;
            }
            else  if(str[0]>='A' && str[0] <='Z'){
                 str[0]=str[0]+32;
            }
        printf("%c", str[0]);
    }

    else {
        if(str[0]>='A' && str[0] <='Z'){
        count3=1;
    }

    for(int i=1; i<l; i++){
        if(str[i]>='A' && str[i] <='Z'){
            count1=1;
        }
        else{
            count1=0;
            break;
        }
    }

     for(int i=1; i<l; i++){
        if(str[i]>='a' && str[i] <='z'){
            count2=1;
        }
        else{
            count2=0;
            break;
        }
    }

    if(count3==1 && count1==1){
        for(int i=0; i<l; i++){

        str[i]=str[i]+32;
    }
    }

    else if(count3==0 && count1==1){

         str[0]=str[0]-32;


   for(int i=1; i<l; i++){

        str[i]=str[i]+32;

    }
    }


    printf("%c", str[0]);

     for(int i=1; i<l; i++){
        printf("%c", str[i]);
    }


    }



return 0;
}
