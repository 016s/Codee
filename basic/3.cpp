//引用是可以作为函数的返回值
//笔记有很多没记，回头补全。
#include <iostream>
using namespace std;

//引用作为函数的返回值就是  int& 类型的，导致说返回值为引用的函数可以作为左值

int& sb(void){
   int  a = 100;
   return a; 
}

int& sbb(void){
    static int b=100;  //静态变量，存放在全局区，全局区上的数据在程序结束后系统释放，所以可以返回，而且还可以直接修改

    return b;
}
int main (){

    int &b = sb();
    int &c = sbb();
   
    cout << c << endl;
    
    cout << c << endl;
    
    cout << c << endl;
    
    cout << c << endl;
    
    cout << c << endl;
    
    cout << c << endl;
    
    cout << c << endl;

    sbb() = 200;
    cout << c << endl;
  //  cout << b << endl;//直接报错 ，不能用局部变量给引用初始化，因为局部变量有生命周期




//-----------------------------------------------------------
//引用的本质，引用的本质就是一个指针常量，指向一个变量，但是不能修改这个变量的值，只能读取。

// int &ref = a;
//  上面的引用实际上是   int*  const  ref  = &a;
//因为指针和const的修饰，导致不能修改，但是可以起到指针的作用，就这些

//关于const的类别有三种：，但是有点复杂，遇到了再学吧


//常量引用





    return 0;

}

//