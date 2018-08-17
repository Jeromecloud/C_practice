//文件打开方式及写入
#include <stdio.h>
#include <stdlib.h>
void main()
{
	/*打开方式1
	FILE *fp;
	fp=fopen("my data.txt","w");
	if(fp==NULL)
		printf("file open error!\n");
	else 
		printf("file open OK\n");
 */
	//打开方式2
	  FILE *fp;
	  char ch;
	  if((fp=fopen("my data.txt","w"))==NULL)
	  {printf("file open OK\n");
		  exit(0);
	  }
		  ch=getchar();
		  while(ch!='@')
		  {
			  fputc(ch,fp);
			  ch=getchar();
		  }
	  
		  fclose(fp);
		  
}