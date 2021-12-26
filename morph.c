#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
randInt(int lower, int upper) //biased, ununiform, unsafe, dont use it
{
	return (int)(rand()%(upper - lower +1)+lower);
}
int
streq(char a[],char b[],int len) //assumes len(a)==len(b)
{
	for (int i=0;i<len;i++){
		if (a[i]!=b[i])
			return 0;
	}
	return 1;
}
int
main (int argc, char *argv[])
{
	srand(time(0));
	char wanted[]="mor";
	char expected[]="asp";
	int len = 3; //manualy set !!! strlen is dogs shit.
	long long int changes=0;
	while (!streq(wanted, expected,len)){
		expected[randInt(0,len-1)]+=(randInt(0,2)-1);
		changes++;
	}
	printf("%lld %s\n", changes, expected);
	return 0;
}
