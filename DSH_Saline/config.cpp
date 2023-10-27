class CfgPatches
{
	class DSH_Saline
	{
		units[]={"DSH_SalineBagIV"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data" 
		};
	};
};

class CfgMods
{
	class DSH_Saline
	{
		dir="DSH_Saline";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="SCLowTonez";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"DSH_Saline/scripts/4_world"
				};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class DSH_SalineBagIV: Inventory_Base
	{
		scope=2;
		displayName="SalineIV DSH";
		descriptionShort="Attaches to Grenade Slots, heals blood and health";
		model="\dz\gear\medical\TransfusionKit.p3d";
		rotationFlags=17;
		debug_ItemCategory=7;
		isMeleeWeapon=1;
		itemSize[]={1,2};
		weight=200;
		inventorySlot[]=
		{
			"MedicalBandage",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DSH_Saline\data\saline_dsh_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\transfusion_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
