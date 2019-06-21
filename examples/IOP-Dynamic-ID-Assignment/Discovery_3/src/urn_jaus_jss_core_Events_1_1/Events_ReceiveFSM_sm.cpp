/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Events_ReceiveFSM_sm.sm
 */

#include "urn_jaus_jss_core_Events_1_1/Messages/MessageSet.h"
#include "urn_jaus_jss_core_Events_1_1/Events_ReceiveFSM.h"
#include "include/urn_jaus_jss_core_Events_1_1/Events_ReceiveFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_core_Events_1_1
{
    // Static class declarations.
    Events_ReceiveFSM_SM_Receiving_Ready Events_ReceiveFSM_SM::Receiving_Ready("Events_ReceiveFSM_SM::Receiving_Ready", 0);
    Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE("Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void Events_ReceiveFSMState::BroadcastGlobalTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::BroadcastLocalTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::CancelEventTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::CommandCompletedTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::CommandExpiredTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::CreateCommandEventTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::CreateEventTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::EventErrorTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::EventOccurredTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::QueryEventTimeoutTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::QueryEventsTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::ReceiveTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::ReceiveTransition(Events_ReceiveFSMContext& context, CancelEvent& msg, Receive::Body::ReceiveRec& transportData)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::ReceiveTransition(Events_ReceiveFSMContext& context, CreateEvent& msg, Receive::Body::ReceiveRec& transportData)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::ReceiveTransition(Events_ReceiveFSMContext& context, QueryEventTimeout& msg, Receive::Body::ReceiveRec& transportData)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::ReceiveTransition(Events_ReceiveFSMContext& context, QueryEvents& msg, Receive::Body::ReceiveRec& transportData)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::ReceiveTransition(Events_ReceiveFSMContext& context, UpdateEvent& msg, Receive::Body::ReceiveRec& transportData)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::SendTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::TimeoutTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::UpdateEventTransition(Events_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Events_ReceiveFSMState::Default(Events_ReceiveFSMContext& context)
    {
        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "TRANSITION   : Default"
                << std::endl;
        }

        throw (
            TransitionUndefinedException(
                context.getState().getName(),
                context.getTransition()));

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::EventErrorTransition(Events_ReceiveFSMContext& context)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        if (ctxt.eventExists())
        {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::EventErrorTransition()"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.sendRejectEventRequestAction();
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::EventErrorTransition()"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }
        else
        {
             Events_ReceiveFSM_SM_Default::EventErrorTransition(context);
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::EventOccurredTransition(Events_ReceiveFSMContext& context)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        if (ctxt.eventExists())
        {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::EventOccurredTransition()"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.sendEventAction();
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::EventOccurredTransition()"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }
        else
        {
             Events_ReceiveFSM_SM_Default::EventOccurredTransition(context);
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(Events_ReceiveFSMContext& context, CancelEvent& msg, Receive::Body::ReceiveRec& transportData)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        if (! ctxt.eventExists(msg))
        {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CancelEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.SendAction("RejectEventRequest", msg, transportData);
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CancelEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }
        else if (ctxt.eventExists(msg))
    
    {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CancelEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.cancelEventAction(msg);
                ctxt.SendAction("ConfirmEventRequest", msg, transportData);
                ctxt.stopEventTimerAction();
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CancelEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }        else
        {
             Events_ReceiveFSM_SM_Default::ReceiveTransition(context, msg, transportData);
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(Events_ReceiveFSMContext& context, CreateEvent& msg, Receive::Body::ReceiveRec& transportData)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        if (ctxt.isSupported(msg) && ! ctxt.eventExists(msg))
        {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CreateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.createEventAction(msg);
                ctxt.SendAction("ConfirmEventRequest", msg, transportData);
                ctxt.resetEventTimerAction();
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CreateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }
        else if (ctxt.isSupported(msg) && ctxt.eventExists(msg))
    
    {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CreateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.updateEventAction(msg);
                ctxt.SendAction("ConfirmEventRequest", msg, transportData);
                ctxt.resetEventTimerAction();
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CreateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }
        else if (! ctxt.isSupported(msg))
    
    {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CreateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.SendAction("RejectEventRequest", msg, transportData);
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(CreateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }        else
        {
             Events_ReceiveFSM_SM_Default::ReceiveTransition(context, msg, transportData);
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(Events_ReceiveFSMContext& context, QueryEventTimeout& msg, Receive::Body::ReceiveRec& transportData)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        Events_ReceiveFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryEventTimeout& msg, Receive::Body::ReceiveRec& transportData)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.SendAction("ReportEventTimeout", msg, transportData);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryEventTimeout& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.setState(endState);
        }
        catch (...)
        {
            context.setState(endState);
            throw;
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(Events_ReceiveFSMContext& context, QueryEvents& msg, Receive::Body::ReceiveRec& transportData)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        Events_ReceiveFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryEvents& msg, Receive::Body::ReceiveRec& transportData)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.SendAction("ReportEvents", msg, transportData);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryEvents& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.setState(endState);
        }
        catch (...)
        {
            context.setState(endState);
            throw;
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(Events_ReceiveFSMContext& context, UpdateEvent& msg, Receive::Body::ReceiveRec& transportData)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        if (ctxt.isSupported(msg) && ctxt.eventExists(msg))
        {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(UpdateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.updateEventAction(msg);
                ctxt.SendAction("ConfirmEventRequest", msg, transportData);
                ctxt.resetEventTimerAction();
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(UpdateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }
        else if (! ctxt.isSupported(msg) || ! ctxt.eventExists(msg))
    
    {
            Events_ReceiveFSMState& endState = context.getState();

            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(UpdateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.clearState();
            try
            {
                ctxt.SendAction("RejectEventRequest", msg, transportData);
                if (context.getDebugFlag() == true)
                {
                    std::ostream& str = context.getDebugStream();

                    str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(UpdateEvent& msg, Receive::Body::ReceiveRec& transportData)"
                        << std::endl;
                }

                context.setState(endState);
            }
            catch (...)
            {
                context.setState(endState);
                throw;
            }
        }        else
        {
             Events_ReceiveFSM_SM_Default::ReceiveTransition(context, msg, transportData);
        }

        return;
    }

    void Events_ReceiveFSM_SM_Receiving_Ready::TimeoutTransition(Events_ReceiveFSMContext& context)
    {
        Events_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        Events_ReceiveFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Receiving_Ready::TimeoutTransition()"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.cancelEventAction();
            ctxt.SendAction("ConfirmEventRequest");
            ctxt.stopEventTimerAction();
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Receiving_Ready::TimeoutTransition()"
                    << std::endl;
            }

            context.setState(endState);
        }
        catch (...)
        {
            context.setState(endState);
            throw;
        }

        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CommandCompletedTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandCompletedTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandCompletedTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CommandExpiredTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandExpiredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandExpiredTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateCommandEventTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateCommandEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateCommandEventTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventTimeoutTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventTimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventTimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::TimeoutTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void Events_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(Events_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Events_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
