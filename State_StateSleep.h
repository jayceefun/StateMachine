class State_Sleep : public State
{
	void Execute(Troll * troll)
	{
		if (troll->isThreadended()) {
			troll->ChangeState(new State_RunAway());
		}
		else {
			troll->Snore();
		}
	}
};
