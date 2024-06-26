#ifndef __CLIENT_H
#define __CLIENT_H

/**
 * Receive messages from the server. This function is meant to be run in a separate thread and handle the reception of messages from the server.
 * 
 * @param socket_desc The socket descriptor.
 */
void *receive_messages(void *socket_desc);

/**
 * Run the client. This function is meant to be called by the main function of the client program.
 */
void run_client();

#endif
