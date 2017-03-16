/*
 * set_ticker.c
 * set_ticker( number_of_milliseconds )
 * arranges for interval timer to issue SIGALARMs at regular intervals
 * return -1 on error, 0 for ok
 * arg in milliseconds, converted into whole seconds and microseconds
 * note: set_ticker(0) turns off ticker
 */

#include <stdio.h>
#include <sys/time.h>

int set_ticker( int n_msecs )
{
   struct itimerval new_timeset;
   long n_sec, n_usecs;

   n_sec = n_msecs / 1000 ;    /* int part */
   n_usecs = ( n_msecs % 1000 ) * 1000L ;  /* remainder */

   new_timeset.it_interval.tv_sec  = n_sec;   /* set reload     */
   new_timeset.it_interval.tv_usec = n_usecs; /* new ticker val */
   new_timeset.it_value.tv_sec     = n_sec;   /* store this     */
   new_timeset.it_value.tv_usec    = n_usecs; /* and this       */

   return setitimer(ITIMER_REAL, &new_timeset, NULL);
}
