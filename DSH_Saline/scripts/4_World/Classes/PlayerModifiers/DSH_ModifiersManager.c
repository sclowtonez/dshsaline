modded class ModifiersManager
{
    override void Init()
	{
		AddModifier(new DSH_SalineBagIVMdfr);


		#ifdef DEVELOPER
		AddModifier(new TestDiseaseMdfr);
		#endif
		AddModifier(new BloodRegenMdfr);
		//AddModifier(new BoneRegen);
		//AddModifier(new Health);
		AddModifier(new SalineMdfr);
		AddModifier(new HealthRegenMdfr);
		AddModifier(new HungerMdfr);
		//AddModifier(new Shock);
		AddModifier(new ImmuneSystemMdfr);
		AddModifier(new StomachMdfr);
		AddModifier(new HeatComfortMdfr);
		AddModifier(new ThirstMdfr);
		AddModifier(new BleedingCheckMdfr);
		//AddModifier(new Blinded);
		//AddModifier(new BrokenArms);
		AddModifier(new BrokenLegsMdfr); // <-- Broken legs are here
		AddModifier(new VomitStuffedMdfr);
		AddModifier(new BurningMdfr);
		AddModifier(new FeverMdfr);
		AddModifier(new HeartAttackMdfr);
		AddModifier(new HemolyticReactionMdfr);
		AddModifier(new PoisoningMdfr);
		AddModifier(new StuffedStomachMdfr);
		//AddModifier(new Tremor);
		AddModifier(new UnconsciousnessMdfr);
		AddModifier(new ShockDamageMdfr);
		AddModifier(new CommonColdMdfr);
		AddModifier(new CholeraMdfr);
		AddModifier(new InfluenzaMdfr);
		AddModifier(new SalmonellaMdfr);
		AddModifier(new BrainDiseaseMdfr);
		AddModifier(new WetMdfr);
		AddModifier(new ImmunityBoost);
		AddModifier(new AntibioticsMdfr);
		AddModifier(new ToxicityMdfr);
		AddModifier(new BreathVapourMdfr);
		AddModifier(new ShockMdfr);
		AddModifier(new WoundInfectStage1Mdfr);
		AddModifier(new WoundInfectStage2Mdfr);
		AddModifier(new CharcoalMdfr);
		AddModifier(new MorphineMdfr);
		AddModifier(new PainKillersMdfr);
		AddModifier(new EpinephrineMdfr);
		AddModifier(new HeatBufferMdfr);
		AddModifier(new DisinfectionMdfr);
		AddModifier(new FatigueMdfr);
		AddModifier(new ContaminationStage1Mdfr);
		AddModifier(new ContaminationStage2Mdfr);
		AddModifier(new ContaminationStage3Mdfr);
		AddModifier(new AreaExposureMdfr);
		AddModifier(new MaskMdfr);
		AddModifier(new FliesMdfr);
		AddModifier(new DrowningMdfr);
    }
};