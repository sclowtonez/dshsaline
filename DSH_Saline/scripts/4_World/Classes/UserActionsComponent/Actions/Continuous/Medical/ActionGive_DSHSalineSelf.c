class Action_GiveSalineSelfCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(DSHUATimeSpent.DSH_SALINE);
	}
};

class Action_GiveSalineSelf : ActionContinuousBase
{
	void Action_GiveSalineSelf()
	{
		m_CallbackClass = Action_GiveSalineSelfCB;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DRINK;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_DRINK;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "#Give Health";
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}

    override void OnFinishProgressServer( ActionData action_data )
    {
        action_data.m_Player.AddHealth("GlobalHealth", "Health", 15);
        action_data.m_Player.AddHealth("GlobalHealth", "Blood", 100);
        action_data.m_Player.GetModifiersManager().ActivateModifier(eMyCustomModifiers.MDF_SALINE_DSH);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        action_data.m_MainItem.Delete();
	}
};