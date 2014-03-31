class State_RunAway : public State
{
	public:
		void Execute(Troll * troll)
		{
			if (troll->isSafe()) {
				troll->ChangeState(new State_Sleep());
			}
			else {
				troll->MoveAwayFromEnemy();
			}
		}
};
