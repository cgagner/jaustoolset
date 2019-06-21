#ifndef _H_SUBSYSTEMIDALLOCATORCLIENT_SENDFSM_SM
#define _H_SUBSYSTEMIDALLOCATORCLIENT_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : SubsystemIDAllocatorClient_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_neya_SubsystemIDAllocatorClient_1_4
{
    // Forward declarations.
    class SubsystemIDAllocatorClient_SendFSM_SM;
    class SubsystemIDAllocatorClient_SendFSM_SM_Sending;
    class SubsystemIDAllocatorClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class SubsystemIDAllocatorClient_SendFSM_SM_Default;
    class SubsystemIDAllocatorClient_SendFSMState;
    class SubsystemIDAllocatorClient_SendFSMContext;
    class SubsystemIDAllocatorClient_SendFSM;

    class SubsystemIDAllocatorClient_SendFSMState :
        public statemap::State
    {
    public:

        SubsystemIDAllocatorClient_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(SubsystemIDAllocatorClient_SendFSMContext&) {};
        virtual void Exit(SubsystemIDAllocatorClient_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        virtual void BroadcastLocalTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        virtual void GrantSubsystemIDTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        virtual void ReceiveTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        virtual void SendTransition(SubsystemIDAllocatorClient_SendFSMContext& context);

    protected:

        virtual void Default(SubsystemIDAllocatorClient_SendFSMContext& context);
    };

    class SubsystemIDAllocatorClient_SendFSM_SM
    {
    public:

        static SubsystemIDAllocatorClient_SendFSM_SM_Sending Sending;
        static SubsystemIDAllocatorClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class SubsystemIDAllocatorClient_SendFSM_SM_Default :
        public SubsystemIDAllocatorClient_SendFSMState
    {
    public:

        SubsystemIDAllocatorClient_SendFSM_SM_Default(const char *name, int stateId)
        : SubsystemIDAllocatorClient_SendFSMState(name, stateId)
        {};

    };

    class SubsystemIDAllocatorClient_SendFSM_SM_Sending :
        public SubsystemIDAllocatorClient_SendFSM_SM_Default
    {
    public:
        SubsystemIDAllocatorClient_SendFSM_SM_Sending(const char *name, int stateId)
        : SubsystemIDAllocatorClient_SendFSM_SM_Default(name, stateId)
        {};

    };

    class SubsystemIDAllocatorClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public SubsystemIDAllocatorClient_SendFSM_SM_Default
    {
    public:
        SubsystemIDAllocatorClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : SubsystemIDAllocatorClient_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        void BroadcastLocalTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        void GrantSubsystemIDTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        void ReceiveTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
        void SendTransition(SubsystemIDAllocatorClient_SendFSMContext& context);
    };

    class SubsystemIDAllocatorClient_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        SubsystemIDAllocatorClient_SendFSMContext(SubsystemIDAllocatorClient_SendFSM& owner)
        : FSMContext(SubsystemIDAllocatorClient_SendFSM_SM::Sending),
          _owner(owner)
        {};

        SubsystemIDAllocatorClient_SendFSMContext(SubsystemIDAllocatorClient_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        SubsystemIDAllocatorClient_SendFSM& getOwner() const
        {
            return (_owner);
        };

        SubsystemIDAllocatorClient_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<SubsystemIDAllocatorClient_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void GrantSubsystemIDTransition()
        {
            setTransition("GrantSubsystemIDTransition");
            (getState()).GrantSubsystemIDTransition(*this);
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

    private:

        SubsystemIDAllocatorClient_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_SUBSYSTEMIDALLOCATORCLIENT_SENDFSM_SM
