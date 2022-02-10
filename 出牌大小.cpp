// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// bool compare(int a,int b){
//     return a>b; //如果返回true，则第一个参数排在第二个参数的前面，如果返回false,则第一个参数排在第二个参数的后面
// }

    // priority_queue<int> a; //默认为大根堆
    // a.push(5);
    // a.push(4);
    // a.push(6);
    // while(!a.empty()){
    //     cout<<a.top();
    //     a.pop();
    // }
// int maxProfit(vector<int>& prices) {
//     int length=prices.size();
//     int value=0;
//     int buyin=prices[0],buyout=prices[0];//设定股票的买入，卖出
//     for(int i=1;i<length;++i){
//         if(prices[i]>buyout){
//             buyout=prices[i];
//         }else if(prices[i]<buyout){
//             value+=buyout-buyin;
//             buyin=prices[i];
//             buyout=prices[i];
//         }
//     }
//     value+=(buyout-buyin);
//     return value;
// }
// int main(){
//     double d=3.4;
//     double result=d*9/5;
//     cout<<result<<endl;
// }
#include <stdio.h>
int main()
{
    char str[4];
    char A[2],B[2];
    int maxA,maxB,sumA,sumB;
    scanf("%s",str);
    A[0] = str[0];
    A[1] = str[1];
    B[0] = str[2];
    B[1] = str[3];
    if((A[0]==A[1]&&B[0]!=B[1])||(A[0]!=A[1]&&B[0]==B[1])){  //进入说明一个是对子，一个不是对子 
        if(A[0]==A[1]){
            printf("A:%c",A[0]);
        }else{
            printf("B:%c",B[0]);
        } 
    }else{     
        if(A[0]==A[1]&&B[0]==B[1]){ //两者都是对子
            if(A[0]==B[0]){  //对子且完全相同
                printf("A:%c",A[0]);  //44 44
            }else if(A[0]>B[0]){
                printf("A:%c",A[0]);
            }else{
                printf("B:%c",B[0]);
            }
        }else{ //两者都不是对子
            sumA=((A[0]=='T'? 10:A[0]-'0')+(A[1]=='T'? 10:A[1]-'0'))%10;
            sumB=((B[0]=='T'? 10:B[0]-'0')+(B[1]=='T'? 10:B[1]-'0'))%10;
            if(sumA==sumB){
                maxA= A[0] > A[1] ? A[0] : A[1];
                maxB= B[0] > B[1] ? B[0] : B[1];
                if(maxA>maxB){
                    printf("A:%d",sumA);
                }else if(maxB > maxA){
                    printf("B:%d",sumB);
                }else{
                    printf("A:%d",sumA); 
                }
            }else if(sumA > sumB){
                printf("A:%d",sumA);
            }else{
                printf("B:%d",sumB);
            }
        }
    }
    return 0;
}