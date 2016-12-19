#include<stdio.h> // system("read");
#include<stdlib.h>  //system("clear");
void positiveAndNegative(int x);


int main(){
    int x;
    int flag = 1;
    int getKey = 1;
    int exit = 0;

    system("clear");
    while(1){

        while(1){
            printf("  ********************************\n");
            printf("  *   正負數判斷程式, 歡迎使用   *\n");
            printf("  *   1) 開始使用                *\n");
            printf("  *   2) 離開程式                *\n");
            printf("  ********************************\n");
            printf("  輸入選項數字:  ");


            scanf("%d", &x);
            if(x==1)
                break;
            
            else if(x==2){
                exit=1;
                break;
            }
            
            else{ 
                printf("輸入錯誤 請重新輸入...\n\n\n");
                //system("pause");
            }
            
        }
        
        if(exit==1){
            printf("\n\n使用者結束程式 謝謝使用 歡迎下次光臨\n");  
            printf("\n  ... 請按任意鍵繼續 ...\n\n");
            system("read");
            system("clear");
            break;
        } 
        
        positiveAndNegative(x);



    }
    
}

void positiveAndNegative(int x){
         
        printf("\n  請輸入一個數>> ");
        scanf("%d", &x);
        printf("\n  結果: ");
        if (x>0){
            printf("%d is Positive\n\n\n",x);
            printf("  ... 請按任意鍵繼續 ...\n");
            system("read"); 
            system("clear");
        }
        else if(x==0){
            printf("%d is Zero\n\n\n",x);
            printf("  ... 請按任意鍵繼續 ...\n");
            system("read"); 
            system("clear");
        }
        else if(x<0){
            printf("%d is Negtive\n\n\n",x);
            printf("  ... 請按任意鍵繼續 ...\n");
            system("read"); 
            system("clear");
        }
        else{
            printf("Number out of bound\n\n\n"); 
            printf("  ... 請按任意鍵繼續 ...\n");
            system("read"); 
            system("clear");
        }
}
