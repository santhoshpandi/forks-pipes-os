
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
void main(){
        int a[2],e,p,n,f;
        p=pipe(a);
        double o;
        if(p==-1)
                printf("Pipe cannot be created");
        else{
                f=fork();
                if(f<0)
                        printf("Process can't be created");
                if(f==0){
                        printf("Enter n to check Armstrong No.:");
                        scanf("%d",&n);
                        close(a[0]);
                        write(a[1],&n,sizeof(n));
                }
                if(f>0){
                        close(a[1]);
                        read(a[0],&n,sizeof(n));
                        int b,d,c;
                        b=n;
                        c=b;
                        while(1){
                                if(b>0&&b<10){
                                        o=b*b*b;
                                        d+=o;
                                        break;
                                }
                                else{
                                        e=b%10;
                                        o=e*e*e;
                                        d+=o;
                                        b=b/10;}
                        }
                        if(c==d)
                                printf("Given no. is Armstrong Number\n");
                        else
                                printf("Given no. is not Armstrong Number\n");
                }
        }
}