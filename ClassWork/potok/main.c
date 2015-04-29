#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
/* ПРОТОТИП
int main()
{
    int pthread_create(pthread_t *tid,
                       void *attributes,
                       void *(*threadFunc)(void*),
                       void *arg);



    return 0;
}
    */

/*
void *run(void *args)
{
    int a = *(int *) args;
    fprintf(stdout, "Hello World! %d\n", a);
    sleep(5);
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t tid;
    int arg, result;
    if(argc < 2)
    {
        fprintf(stderr, "Too few arguments\n");
        return 1;
    }
    arg = atoi(argv[1]);

    result  = pthread_create(&tid, NULL, run, &arg);

    if (result !=0)
    {
        fprintf(stderr, "ERROR\n");
        return 1;
    }
    fprintf(stdout, "Goodbye World!\n");
    return 0;
}
*/


void * run(void *arg)
{
    for(int i=0; i < 50; ++i)
    {
        fprintf(stderr, "%d\n", i);
        sched_yield();
    }
    return NULL;
}








