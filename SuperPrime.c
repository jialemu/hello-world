//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int isPrime(int x);
int splitNum(int x);
int main()
{

	int spprime[1000];
	int a=0,s=0;
	int av;
	for(int i=0;i<=99;i++)
	{
		spprime[i] = 0;
	}
	for(int i=100;i <= 9999;i++){

		if(isPrime(i) == 1&&splitNum(i) == 1){

			spprime[a] = i;

			printf("%d ",i);

			sum += i;

			a++;		

		}

	}
	av = s/a;
	printf("%d",a);
    return 0;
}

isPrime(int x){

	int n= 0;

	for(int i=1;i < x;i++){

		if(x%i == 0){

			n++;

		}

	}

	if(n == 1){

		return 1;

	}

	else return 0; 

} 
splitNum(int x){

	int num[4];

	num[0] = x/1000;

	num[1] = (x-1000*num[0])/100;

	num[2] = (x-1000*num[0]-100*num[1])/10;

	num[3] = x-1000*num[0]-100*num[1]-10*num[2];
	int s = 0 ;

	int s1 = 0;

	for(int i=0;i < 4;i++){

		s += num[i];

		s1 += num[i]*num[i];

	}
	int k0=0,k1=0;

	for(int i=1;i < s;i++){

		if(s % i == 0){

			k0++;

		}

	}
	for(int i=1;i < s;i++){

		if(s%i == 0){

			k1++;

		}

	}
	if(k0 == 1 && k1 == 1){

		return 1;

	}

	else return 0;

}

