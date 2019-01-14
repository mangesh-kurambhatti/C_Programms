#include<stdio.h>

int CreatePacket(int,int,int,int);
int ExtractPacket(int,int,int,int);

int main()
{
	int crc,flag,length,data;

	printf("\n Enter the size of bits required for  crc :");
	scanf("%d",&crc);

	printf("\n Enter the size of bits required for  flag :");
	scanf("%d",&flag);

	printf("\n Enter the size of bits required for  length :");
	scanf("%d",&length);

	printf("\n Enter the size of bits required for  data:");
	scanf("%d",&data);

	CreatePacket(crc,flag,length,data);

return 0;	
}

int CreatePacket(int crc,int flag,int length ,int data)
{
	int packet=crc;
	packet |=flag;
	packet=packet<<5;
	packet |=length;
	packet = packet<<19;
	packet |= data;
	
	printf("result is %d:",packet);
	

}

int ExtractPacket(int crc, int flag ,int length, int data)
{


}
