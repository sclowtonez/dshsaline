class DSH_SalineBagIV: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(Action_GiveSalineTarget);
		AddAction(Action_GiveSalineSelf);
	}
};