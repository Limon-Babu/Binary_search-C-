#include <stdio.h>
int main()
{
    int ara[]={1,8,9,12,14,17,26,29,34,38,41,47,45,49,51,57,58,62,63,68,69,70,79,83,87,89,91,97,99};
    int low_index=0,high_index=28;
    int num=79;
    int mid_index;
    while(low_index<=high_index){
        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index]){
            break;
        }
        if(num>ara[mid_index]){
        low_index=mid_index+1;
        }
        else{
            high_index=mid_index-1;
        }
    }
    if(low_index>high_index){
        printf("%d is not in the array\n",num);
    }
    else{
        printf("%d is found in the list. It the %dth number of the array.\n",num,mid_index+1);
    }
    return 0;
}
