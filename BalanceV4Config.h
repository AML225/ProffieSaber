#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 269;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SHARED_POWER_PINS
#define BLADE_DETECT_PIN 17 //Blade3Pin
#define IDLE_OFF_TIME 60 * 10 * 1000
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {								//When Emitter is Attached (Yes Blade, No CC)
   { "TeensySF", "tracks/venus.wav",
	StyleNormalPtr<CYAN, WHITE, 300, 800>(),				//SCW PCB NPXLs
	StyleNormalPtr<CYAN, WHITE, 300, 800>(),				//KR Pixel Stick
	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
	"cyan"},
};

Preset presets2[] = {								//When Emitter is NOT Attached (No Blade, Yes CC)
   { "TeensySF", "tracks/venus.wav",
	StyleNormalPtr<CYAN, WHITE, 300, 800>(),				//SCW PCB NPXLs
    	StyleNormalPtr<BLACK, BLACK, 300, 800>(),				//KR Pixel Stick
	StylePtr<InOutHelper<CYAN, 300, 800, Pulsing<YELLOW, BLACK, 800>>>(),	//Crystal Chamber
	StylePtr<InOutHelper<Pulsing<WHITE, BLACK, 800>, 300, 800, WHITE>>>(),	//Red Control Box LED
	StylePtr<InOutHelper<WHITE, 300, 800, Pulsing<WHITE, BLACK, 800>>>(),	//Green Control Box LED
};

BladeConfig blades[] = {
 { 0, 
	SubBlade(0, 4, WS281XBladePtr<269, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), 	//SCW PCB NPXL			(n=5)
    	SubBlade(5, 268, NULL),												//KR Pixel Stick		(n=264)
	WS281XBladePtr<2, bladePin, Color8::GRB, PowerPINS<bladePowerPin1> >(),						//Crystal Chamber 		(n=2)
	SimpleBladePtr<CreeXPE2White, NoLED, NoLED, bladePowerPin4, -1, -1, -1>0, 					//Red Contol Box 		(n=1)
	SimpleBladePtr<CreeXPE2White, NoLED, NoLED, bladePowerPin5, -1, -1, -1>0, 					//Green Control Box LED		(n=1)
CONFIGARRAY(presets) },

 { NO_BLADE, 
	SubBlade(0, 4, WS281XBladePtr<269, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), 	//SCW PCB NPXL			(n=5)
    	SubBlade(5, 268, NULL),												//KR Pixel Stick		(n=264)
	WS281XBladePtr<2, bladePin, Color8::GRB, PowerPINS<bladePowerPin1> >(),						//Crystal Chamber 		(n=2)
	SimpleBladePtr<CreeXPE2White, NoLED, NoLED, bladePowerPin4, -1, -1, -1>0, 					//Red Contol Box 		(n=1)
	SimpleBladePtr<CreeXPE2White, NoLED, NoLED, bladePowerPin5, -1, -1, -1>0, 					//Green Control Box LED		(n=1)
CONFIGARRAY(presets2) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
