#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{   
	int a[2],p,fd1,fd2;
	p=pipe(a);
	char *myfif1="file1",str1[100],str2[100];
	char *myfif2="file2";
	if(p==-1)
               {
				printf("Pipe cannot be created");
            }
            else
            {
			if(p==0)
			{  int l=0,w=0,c=0;
		fd1=mkfif(myfif1,0666);
			fd2=mkfif(myfif2,0666);
	printf("enter the string::\n");
	fgets(str1,100,stdin);
	fd1=open(myfif,O_WRONLY);
	write=(fd1,str1,strlen(str1)+1);
	close(fd1);}
	else{
		fd1=open(myfif,O_RDONLY);
	read=(fd1,str1,100);
		int i=0;
		while(str1[i]!='\0')
		{
			if(str1[i]=='.'||str1[i]=='\n')
				l++;
			else if(str1[i]=='')
				w++;
			else
				c++;
			i++;
		}
		
		printf("no of lines is %d",l);
		printf("no of words is %d",w);
		printf("no of count is %d",c);
		
		
		
		
		
		close(fd1);
		
		
	}
		
	
}
