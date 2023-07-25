#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	//umask(0666);
	//creat("ab.txt",0666);
	//chmod("ab.txt",0421);
	int a=chown("hello",1001,1001);
	printf("%d\n",a);
}
