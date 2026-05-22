//堆区开辟内存需要new关键字，释放内存需要delete关键字。
//堆区的内存是程序员自己使用

//new返回数对应的类型的指针

#include<iostream>
using namespace std;

int main(){
    int *p = new int (521);

    int *arr = new int[10];
    //还可以直接创建一个数组作为新开辟的
    for(int i=0;i<10;i++){
    arr[i] = i+8;
    cout<<*(arr+i)<<" ";//这里用数组经典的中括号表示和用指针加i表示是一样的，加i，想到于加四个字节，到下一个地址存放的数据去，所以加1其实是地址加了一，然后根据地址再找到值

    }
    cout<<endl;
    delete[] arr; //释放数组内存，需要加一个中括号


    cout<<*p<<endl;
    cout<<p<<endl;
    delete p;//释放之后再访问就是非法操作，会报错，不要尝试
    return 0;

}