%copyright%

#ifndef %service_name_allcaps%_H
#define %service_name_allcaps%_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "%service_namespace%/Messages/MessageSet.h"
#include "%service_namespace%/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

%statemachine_include_list%

namespace %service_namespace%
{
	
class DllExport %service_name% : public JTS::Service
{
public:
	static const std::string Id;
	static const std::string Version;
	static const jUnsignedByte MajorVersion = %service_major_version%;
	static const jUnsignedByte MinorVersion = %service_minor_version%;
	
	%service_name%( JTS::JausRouter* jausRouter %parent_service_list%);
	virtual ~%service_name%();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
%statemachine_variable_list%	


	
protected:
	virtual void run();

};

};

#endif // %service_name_allcaps%_H
