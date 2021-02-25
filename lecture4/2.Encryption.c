#include<stdio.h>
#include<stdlib.h>

main()
{
      int a,b,t,k;
      printf("Input Encryption of Data and a Secret Key in Binary Format:\n");
      scanf("%d %d",&a,&b);
      t=a^b;
      k=t^b;
      printf("Encrypted Character=%d\n",t);
      printf("Decrypted Character=%d\n",k);
      system("PAUSE");
      
}
