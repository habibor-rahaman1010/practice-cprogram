#include <stdio.h>

int isPrime(int num)
{
	int i;

	int flag=0;

	for(i=2; i<num/2; i++)
	{
		if(num%i ==0)
		{
			flag =1;
			break;
		}
	}
	if(flag==1)
		return 0;
	else
		return 1;
}

int main() {
	int loop;
	int arr[]={100, 2, 31, 13, 97, 10, 20, 11};
	int len = sizeof(arr)/sizeof(arr[0]);

	for(loop=0; loop<len; loop++)
	{
		printf("%3d - %s\n",arr[loop],(isPrime(arr[loop])?"Prime":"Not Prime"));
	}

	printf("\n");

	return 0;
}
