#include <stdio.h>


int main (void){
    int v1;
    printf("?O?_??????(0:No, 1:Yes)");
    scanf("%d", &v1);
        if (v1 == 1){
            printf("?i?H?U??\n");
            return 0;
        }else if (v1 == 0){
            printf("?O?_?w?B?(0:No, 1:Yes)");
            }   
            scanf("%d", &v1);
            if(v1 == 1){
                printf("?i?H?U??\n");
                return 0;
                }else if(v1 == 0){
                    printf("?O?_?~???J > 100?U?(0:No, 1:Yes)");
                    }
                    scanf("%d", &v1);
                    if(v1 == 0){
                        printf("????U??\n");
                    }else if(v1 == 1){
                        printf("?i?H?U??\n");
                }
            }