#include <stdio.h>


int main (void){
    int v1;
    printf("是否有房產?(0:No, 1:Yes)");
    scanf("%d", &v1);
        if (v1 == 1){
            printf("可以貸款\n");
            return 0;
        }else if (v1 == 0){
            printf("是否已婚?(0:No, 1:Yes)");
            }   
            scanf("%d", &v1);
            if(v1 == 1){
                printf("可以貸款\n");
                return 0;
                }else if(v1 == 0){
                    printf("是否年收入 > 100萬?(0:No, 1:Yes)");
                    }
                    scanf("%d", &v1);
                    if(v1 == 0){
                        printf("不能貸款\n");
                    }else if(v1 == 1){
                        printf("可以貸款\n");
                }
            }