//
// .
//
#include <sys/clock.h>
#include "statistic.h"
#include "stdio.h"
#include <limits.h>
node_statistic_t stat;

/*Calculate delay, time synchronization
 * https://sourceforge.net/p/contiki/mailman/message/34073597/
 */

void statistic_init(void){
    stat.nb_pck_sent = 0;
    stat.nb_pck_recv = 0;
    stat.rtt = 0;
    stat.avr_rtt = 0;
    stat.total_rtt = 0;
    stat.sent_time = 0;
    stat.received_time = 0;
    //time for receiving ack
    stat.data_seq[25] = {-1};
    stat.ack_sent_time[25] = {-1};
    stat.ackrcv_time[25] = {-1};
    stat.max_ack_time = 10;
    stat.data_packsent[25] = {-1};
}

void print_statistic(void){
            printf("Performance statistics: nb_pck_sent %d, nb_pck_recv %d,"
            "rtt %lu, avr_rtt %lu, sent_time %lu, received_time %lu, CLOCK_SECOND %lu\n",
             stat.nb_pck_sent, stat.nb_pck_recv, stat.rtt, stat.avr_rtt,
             stat.sent_time, stat.received_time, CLOCK_SECOND);
}
