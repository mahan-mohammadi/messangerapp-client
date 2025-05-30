#ifndef PACKET_H
#define PACKET_H

#include <string>
#include "user.h"
#include "protocol.h"

class packet {
private:
	User sender;
	Protocol protocol;

public:
	packet();
	packet(User sender, Protocol type);

	void setSender(User sender);
	User getSender();
	void setProtocol(Protocol type);
	Protocol getProtocol();
	void send();
}

#endif