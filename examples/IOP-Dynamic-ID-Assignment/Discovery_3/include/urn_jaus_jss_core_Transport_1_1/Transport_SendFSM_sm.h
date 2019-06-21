#ifndef _H_TRANSPORT_SENDFSM_SM
#define _H_TRANSPORT_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Transport_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_core_Transport_1_1
{
    // Forward declarations.
    class Transport_SendFSM_SM;
    class Transport_SendFSM_SM_Sending;
    class Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class Transport_SendFSM_SM_Default;
    class Transport_SendFSMState;
    class Transport_SendFSMContext;
    class Transport_SendFSM;

    class Transport_SendFSMState :
        public statemap::State
    {
    public:

        Transport_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(Transport_SendFSMContext&) {};
        virtual void Exit(Transport_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(Transport_SendFSMContext& context);
        virtual void BroadcastGlobalTransition(Transport_SendFSMContext& context, BroadcastGlobal& msg);
        virtual void BroadcastLocalTransition(Transport_SendFSMContext& context);
        virtual void BroadcastLocalTransition(Transport_SendFSMContext& context, BroadcastLocal& msg);
        virtual void ReceiveTransition(Transport_SendFSMContext& context);
        virtual void SendTransition(Transport_SendFSMContext& context);
        virtual void SendTransition(Transport_SendFSMContext& context, Send& msg);

    protected:

        virtual void Default(Transport_SendFSMContext& context);
    };

    class Transport_SendFSM_SM
    {
    public:

        static Transport_SendFSM_SM_Sending Sending;
        static Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class Transport_SendFSM_SM_Default :
        public Transport_SendFSMState
    {
    public:

        Transport_SendFSM_SM_Default(const char *name, int stateId)
        : Transport_SendFSMState(name, stateId)
        {};

    };

    class Transport_SendFSM_SM_Sending :
        public Transport_SendFSM_SM_Default
    {
    public:
        Transport_SendFSM_SM_Sending(const char *name, int stateId)
        : Transport_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(Transport_SendFSMContext& context, BroadcastGlobal& msg);
        void BroadcastLocalTransition(Transport_SendFSMContext& context, BroadcastLocal& msg);
        void SendTransition(Transport_SendFSMContext& context, Send& msg);
    };

    class Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public Transport_SendFSM_SM_Default
    {
    public:
        Transport_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : Transport_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(Transport_SendFSMContext& context);
        void BroadcastLocalTransition(Transport_SendFSMContext& context);
        void ReceiveTransition(Transport_SendFSMContext& context);
        void SendTransition(Transport_SendFSMContext& context);
    };

    class Transport_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        Transport_SendFSMContext(Transport_SendFSM& owner)
        : FSMContext(Transport_SendFSM_SM::Sending),
          _owner(owner)
        {};

        Transport_SendFSMContext(Transport_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        Transport_SendFSM& getOwner() const
        {
            return (_owner);
        };

        Transport_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<Transport_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastGlobalTransition(BroadcastGlobal& msg)
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this, msg);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition(BroadcastLocal& msg)
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this, msg);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

        void SendTransition(Send& msg)
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this, msg);
            setTransition(NULL);
        };

    private:

        Transport_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_TRANSPORT_SENDFSM_SM
