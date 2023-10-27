modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
		actions.Insert(Action_GiveSalineSelf);
		actions.Insert(Action_GiveSalineTarget);
	}
}