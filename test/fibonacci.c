
/*void addPrint(){
    double i = 10;
    while(i<19){
        double temp = 0;
        temp = i / 5;
        double s = 0;
        s = temp + i;
        i = s;
    }
    printf("%d",i);
}
*/
int main(){
    int arr[25];
    int index = 0;
    // 求０～２０的斐波那契数列
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    while(index < 10*2 ){
        int b = arr[index];
        arr[index+2]=arr[index+1] + b;
        printf("f(%d)=%d\n",index,b);
        index = index +1;
    }
    printf("完成斐波那契数列打印\n");
}