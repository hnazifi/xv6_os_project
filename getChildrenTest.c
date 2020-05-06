#include "types.h"
#include "user.h"

int main(void){
 int n1 = fork();
 int n2 = fork();
 int n3 = fork();

 if(n1>0 && n2>0 && n3>0){
   printf(1,"n1 = %d , n2 = %d , n3 = %d ",n1,n2,n3);
   printf(1,"%d", getchildren());
 }

 while(wait() != -1){}
 sleep(1);
 exit();
}
