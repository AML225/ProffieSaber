#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 6
#define NUM_BUTTONS 2
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 269;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SERIAL
#define SHARED_POWER_PINS
#define BLADE_DETECT_PIN 17 //Blade3Pin
#define IDLE_OFF_TIME 60 * 10 * 1000
#define COLOR_CHANGE_DIRECT
#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset blade[] = {								//When Emitter is Attached (Yes Blade, No CC)

  { "LukeROTJ", "tracks/mars.wav",
	StylePtr<Layers<Mix<SwingSpeed<400>,AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,Mix<SwingSpeed<600>,RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<150,255,150>>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StylePtr<Layers<Mix<SwingSpeed<400>,AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,Mix<SwingSpeed<600>,RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<150,255,150>>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"LukeROTJ"},
	
  {	"LukeANH", "tracks/mars.wav",
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"LukeANH"},
	
  {	"LukeESB", "tracks/mars.wav",
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),  
  	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"LukeESB"},
	
  {	"Vader", "tracks/Imperial_March_Short.wav",
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Coral,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Coral,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"Vader"},
	
  {	"Kanan", "tracks/mars.wav",
 	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),  
  	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"Kanan"},

  { "TeensySF", "tracks/venus.wav",
	StyleNormalPtr<CYAN, WHITE, 300, 800>(),				//SCW PCB NPXLs
	StyleNormalPtr<CYAN, WHITE, 300, 800>(),				//KR Pixel Stick
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"cyan"},
  
  { "SmthJedi", "tracks/mars.wav",
    StylePtr<Layers<StyleFire<StripesX<Int<3000>,Scale<TwistAngle<>,Int<-500>,Int<0>>,Red,Orange,Yellow,Green,Blue,Magenta>,StripesX<Int<3000>,Scale<TwistAngle<>,Int<-500>,Int<0>>,Tomato,OrangeRed,Orange,Yellow,SteelBlue,DeepPink>,0,3,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
    StylePtr<Layers<StyleFire<StripesX<Int<3000>,Scale<TwistAngle<>,Int<-500>,Int<0>>,Red,Orange,Yellow,Green,Blue,Magenta>,StripesX<Int<3000>,Scale<TwistAngle<>,Int<-500>,Int<0>>,Tomato,OrangeRed,Orange,Yellow,SteelBlue,DeepPink>,0,3,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"blue"},
  
  { "SmthGrey", "tracks/mercury.wav",
    StyleFirePtr<RED, YELLOW, 0>(),
    StyleFirePtr<RED, YELLOW, 1>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"fire"},
  
  { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(),
    StyleNormalPtr<RED, WHITE, 300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"red"},
  
  { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN, 0>(),
    StyleFirePtr<BLUE, CYAN, 1>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"blue fire"},
  
  { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(),
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"green"},
  
  { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(),
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"white"},
  
  { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(),
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth	
	"yellow"},
  
  { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(),
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"magenta"},
  
  { "SmthFuzz", "tracks/mars.wav",
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(),
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"gradient"},
  
  { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(),
    StyleRainbowPtr<300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"rainbow"},
  
  { "TthCrstl", "tracks/uranus.wav",
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(),
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"strobe"},
  
  { "TeensySF", "tracks/venus.wav",
    &style_pov,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"POV"},
  
  { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), 
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"Battery\nLevel"}
};

Preset chassis[] = {								//When Emitter is NOT Attached (No Blade, Yes CC)
   { "TeensySF", "tracks/venus.wav",
	StyleNormalPtr<CYAN, WHITE, 300, 800>(),				//SCW PCB NPXLs
    StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//KR Pixel Stick
	StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>> ,InOutTrL<TrInstant,TrFade<300>,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,3000>>>>(), //Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	StylePtr<Blue>(),	//Bluetooth
	"cyan"}
};

BladeConfig blades[] = {
 { 0, 
	SubBlade(0, 4, WS281XBladePtr<269, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()), 	//SCW PCB NPXL		(n=5)
    	SubBlade(5, 268, NULL),												//KR Pixel Stick	(n=264)
	WS281XBladePtr<2, bladePin, Color8::GRB, PowerPINS<bladePowerPin1>>(),						//Crystal Chamber 	(n=2)
	SimpleBladePtr<CreeXPE2WhiteTemplate<550>, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(), 			//Red Contol Box 	(n=1)
	SimpleBladePtr<CreeXPE2WhiteTemplate<550>, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(), 			//Green Control Box LED	(n=1)
	SimpleBladePtr<CH3LED, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>(),								//Bluetooth
CONFIGARRAY(blade) },

 { NO_BLADE, 
	SubBlade(0, 4, WS281XBladePtr<269, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()), 	//SCW PCB NPXL		(n=5)
    	SubBlade(5, 268, NULL),												//KR Pixel Stick	(n=264)
	WS281XBladePtr<2, bladePin, Color8::GRB, PowerPINS<bladePowerPin1>>(),						//Crystal Chamber 	(n=2)
	SimpleBladePtr<CreeXPE2WhiteTemplate<550>, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(), 			//Red Contol Box 	(n=1)
	SimpleBladePtr<CreeXPE2WhiteTemplate<550>, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(), 			//Green Control Box LED	(n=1)
	SimpleBladePtr<CH3LED, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>(),								//Bluetooth
CONFIGARRAY(blade) } //should be "chassis" temporarily changed to "blade"
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
