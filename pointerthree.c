#include<stdio.h>
int main()
{
	int ivarone=5,ivartwo=10,*iptrone=&ivarone,*iptrtwo=&ivartwo;
        int *res;
	res=iptrtwo-1;
	printf("iptrone:%d iptrtwo:%d  res:%d\n",iptrone,iptrtwo,res);
}

