#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int fib(int n){
  if (n == 0){
    return 0;

  }else if (n == 1){
    return 1;

  }else{
  return fib(n-1) + fib(n-2);
}
}
  int main(int argc,char *argv[])
  {
    if (argc < 2){
      std::cout <<"引数を入力してください"<< std::endl;
      exit(EXIT_FAILURE);
    }
    int num;
    sscanf(argv[1],"%d",&num);
    for (int i = 1;i < num+1;i++){
      std::cout << fib(i) << std::endl;
    } 

  }




  
