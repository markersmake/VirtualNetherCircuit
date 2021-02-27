#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <errno.h>
#include <pthread.h>
#include <string.h>


struct header
{
	unsigned int source_addr;
	unsigned int destination_addr;
	unsigned char protocol;
	unsigned in tcp_length;

	struct tcp_header tcp;
	
};

unsigned int net_checksum(unsigned int *port, int size_of_header);

void process_packet(char *buffer, int size, char *source_ip);

int start_sniffer(void);

void prepare_header(char *packet, char *source_ip, struct iphdr *ip_header, struct tcphdr *tcp_header);


