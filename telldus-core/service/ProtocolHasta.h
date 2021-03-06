//
// Copyright (C) 2012 Telldus Technologies AB. All rights reserved.
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef TELLDUS_CORE_SERVICE_PROTOCOLHASTA_H_
#define TELLDUS_CORE_SERVICE_PROTOCOLHASTA_H_

#include <string>
#include "service/Protocol.h"

class ProtocolHasta : public Protocol {
public:
	int methods() const;
	virtual std::string getStringForMethod(int method, unsigned char data, Controller *controller);

protected:
	static std::string convertByte(unsigned char byte);
};

#endif  // TELLDUS_CORE_SERVICE_PROTOCOLHASTA_H_
