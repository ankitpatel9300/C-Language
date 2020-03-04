#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/time.h>
#define MAX_THREADS 4

int killo[1000] ;

void* automatic_Guess(void* arg)
{
	int *value=(int *)arg ;
	int low=0,high=999,mid=(low+high)/2;
	while(low<=high)
	{
		if (killo[mid]< (*value) )
		low=mid+1;
		else if (killo[mid]== *value)
		{
			printf(" \n thread  guess matches with System Guess %d \n" ,*value);
			break;
		}
		else
			high=mid-1;
		    mid=(low+high)/2;

   sleep(2);
	}

	return NULL;
}

int main()
{   int num ,guess ,tries=0;
    srand(time(0));
    num=rand()%1000 +1 ;

	for(int i=0 ;i<1000 ;i++)
	{
		killo[i]= i+1 ;
	}
	pthread_t threads[MAX_THREADS];
	//creating 4 threads
	for(int i=0;i<MAX_THREADS;i++)
	{
		pthread_create(&threads[i],NULL ,&automatic_Guess,&num) ;

	}

	struct timeval start ,end ;
	printf(" Guess the number Game \n ");
    gettimeofday(&start,NULL);
	 do
	{
		printf("Enter your Guess number between 1 and 1000 :");
		scanf("%d",&guess);
		tries++ ;
		if(guess>num)
		{
			printf("Number is too high \n");
		}
		else if(guess<num)
		{
			printf("Number is too low \n");
		}
		else
		{
			printf("You Guess correct number in %d Trials \n" ,tries);
		}

	}
	while(guess!=num);
    sleep(1);

    gettimeofday(&end,NULL);
    long seconds = (end.tv_sec - start.tv_sec);
    long micros= ((seconds * 1000000) + end.tv_usec) - (start.tv_usec);

    printf("Time spent is %ld Seconds" ,micros);
	return 0;

	/*for(int i =0; i< MAX_THREADS; i++)
	{
		pthread_join(threads[i],NULL);
	}  */
return 0;
}

