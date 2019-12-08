%copyright%

#include "%service_namespace%/%service_name%.h"
#include <mutex>

using namespace JTS;

const std::string %service_namespace%::%service_name%::Id = "%service_id%";
const std::string %service_namespace%::%service_name%::Version = "%service_version%";
constexpr jUnsignedByte %service_namespace%::%service_name%::MajorVersion;
constexpr jUnsignedByte %service_namespace%::%service_name%::MinorVersion;

namespace %service_namespace%
{
	
%service_name%::%service_name%(JTS::JausRouter* jausRouter %parent_service_list%) : Service(Id, MajorVersion, MinorVersion)
{
	jausRouter->setTransportType(%service_transport_type%);
	
%statemachine_assignment_list%
}


%service_name%::~%service_name%()
{
%statemachine_destruction_list%
}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void %service_name%::run()
{
	
	/// Perform any entry actions specified by the start state.
%start_state_actions%
	
	/// Kick-off the receive loop...
	EventReceiver::run();
}

/**
 *	This is the function that will process an event either generated
 *  by the service, sent to it by another service on the same component,
 *  or as a message sent by a different component. 
 */
bool %service_name%::processTransitions(InternalEvent* ie)
{
   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   const std::lock_guard<DeVivo::Junior::JrMutex> lock(mutex);

			// Invoke the FSM transition for this event.
%transition_calls%			 
   return false;
}


/**
 *	This is the function that will check for default transitions if
 *  no other transitions were satisfied. 
 */
bool %service_name%::defaultTransitions(InternalEvent* ie)
{
   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   const std::lock_guard<DeVivo::Junior::JrMutex> lock(mutex);

			// Invoke the FSM transition for this event.
%default_transition_calls%	
   return false;
}


};
