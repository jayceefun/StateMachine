class Troll
{
	State * m_pCurrentState;
	public:
		void Update()
		{
			m_pCurrentState->Execute(this);
		}
		void ChangeStates(const State * pNewState)
		{
			delete m_pCurrentState;
			m_pCurrentState = pNewState;
		}
};
