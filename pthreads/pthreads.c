#include <stdio.h>
#include <pthread.h>

void *thread_fn(void *arg)
{
  printf("Thread done\n");
  return NULL;
}

int main(void)
{
  pthread_t thread1, thread2;
  pthread_create(&thread1, NULL, thread_fn, NULL);
  pthread_create(&thread2, NULL, thread_fn, NULL);

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  printf("Done\n");
  return 0;
}
