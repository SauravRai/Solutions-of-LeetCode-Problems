/******************************************************************************
Bit Manipulation Programs
@author: Saurav Rai
1) set the ith bit of an integer
2) clear the ith bit of an integer
example(set): 4 = 0100(in binary form)
        if i = 2 then output is 0100 because the bit is already set
        if i = 3 then output is 1100(12)
example(clear): 4 = 0100
               if i = 1 then output is 0100 because there is no bit to clear
               if i = 2  then output is 0000 the 1 bit in 2nd position is cleared
note: a<<b == a = 2^b  and
      a>>b == a/2^b

*******************************************************************************/

#include<stdio.h>
#define set(n,i) (n = n|(1<<i))
#define clear(n,i) (n = n&~(1<<i))

int main()
  {
   int a = 4;
   set(a,2);
   printf("After setting the bit: %d\n",a);
   clear(a,1);
   printf("After setting the bit: %d\n",a);
   clear(a,2);
   printf("After setting the bit: %d\n",a);
   return 0;

  }

