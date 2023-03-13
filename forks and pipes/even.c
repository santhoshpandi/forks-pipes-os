#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
void main(){
        int a[2],e,p,n,f,b[20];
        p=pipe(a);
        double o;
        if(p==-1)
                printf("Pipe cannot be created");
        else{
                f=fork();
                if(f<0)
                        printf("Process can't be created");
                if(f==0){  int i,c;
                printf("enter the number of intergers\n");
                scanf("%d",&c);
                for(i=0;i<c;i++)
                     {
						   printf("Enter the integers:");
                        scanf("%d",&b[i]);}
                        close(a[0]);
                   
						
                    write(a[1],&b,sizeof(b)*1);
                }
                if(f>0){
                        close(a[1]);
                        
                        read(a[0],&b,sizeof(b));
                        int j,i,brr[20],count=0;
                        for(j=0;j<sizeof(b);j++)
                        {
                        	brr[i]=b[i];
                        	count++;
						}
int temp=0;
for(j=0;j<count;j++)
{
	if(brr[i]%2==0)
	   temp = temp+brr[i];
						}						
		printf("the sum of all even numbers is %d",temp);
						 }
        }
}


