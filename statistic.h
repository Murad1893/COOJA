//
//
//
/**Statistic module */
#ifndef STATISTIC_H
#define STATISTIC_H

#include "stdint.h"
typedef struct node_statistic_struct {
    uint8_t nb_pck_sent; /*number of packets sent*/
    uint8_t nb_pck_recv; /*number of packets received*/
    unsigned long rtt; /*round trip time*/
    unsigned long total_rtt; /*total round trip time*/
    unsigned long avr_rtt; /*average round trip time*/
    unsigned long sent_time; /*the time that node sent data*/
    unsigned long received_time; /* the time that node received data*/
    unsigned long ackrcv_time; //time that node received ack
    unsigned long ack_time; //total time for ack receive
    unsigned long max_ack_time;
    int data_packsent;
}node_statistic_t;

extern node_statistic_t stat;

void statistic_init(void);
void print_statistic(void);
#endif //STATISTIC_H
