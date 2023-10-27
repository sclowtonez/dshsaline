class Action_GiveSalineTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(DSHUATimeSpent.DSH_SALINE);
	}
};

class Action_GiveSalineTarget: ActionContinuousBase
{
	void Action_GiveSalineTarget()
	{
		m_CallbackClass = Action_GiveSalineTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EMPTY_VESSEL;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_EMPTY_VESSEL;		
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		//m_Text = "#Heal";
	}

	override void CreateConditionComponents()  
	{	
		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);	
	}

    override void OnFinishProgressServer( ActionData action_data )
    {
        PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
        Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );
        float delta = nacdata.param1;
         
        ntarget.AddHealth("GlobalHealth", "Health", 15);
        ntarget.AddHealth("GlobalHealth", "Blood", 500);
        ntarget.GetModifiersManager().ActivateModifier(eMyCustomModifiers.MDF_SALINE_DSH);          
        action_data.m_MainItem.Delete();
    }

	override bool IsDrink()
	{
		return true;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	

		if (!super.ActionCondition(player, target, item))
			return false;

		if (GetGame().IsClient())
		{
			PlayerBase targetPlayer;
			if (PlayerBase.CastTo(targetPlayer, target.GetObject()))
			{
				if (targetPlayer.GetIdentity())
					m_Text = "#Heal " + targetPlayer.GetIdentity().GetName();
				else
					m_Text = "#Heal";
			}
		}
		return player.CanEatAndDrink();
	}
};