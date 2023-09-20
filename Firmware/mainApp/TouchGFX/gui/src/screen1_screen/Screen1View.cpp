#include <gui/screen1_screen/Screen1View.hpp>
#include <stdint.h>
extern uint8_t serialNumber;
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::saveReading(uint8_t Distance)
{
	switch(serialNumber){
	case 0:	Unicode::snprintf(S1Buffer,S1_SIZE,"%d",Distance);
			S1.invalidate();
			break;
	case 1: Unicode::snprintf(S2Buffer,S2_SIZE,"%d",Distance);
			S2.invalidate();
			break;
	case 2: Unicode::snprintf(S3Buffer,S3_SIZE,"%d",Distance);
			S3.invalidate();
			break;
	case 3: Unicode::snprintf(S4Buffer,S4_SIZE,"%d",Distance);
			S4.invalidate();
			break;
	case 4: Unicode::snprintf(S5Buffer,S5_SIZE,"%d",Distance);
			S5.invalidate();
			break;
	default: Unicode::snprintf(S1Buffer,S1_SIZE,"%d",000);
			S1.invalidate();
			Unicode::snprintf(S2Buffer,S2_SIZE,"%d",000);
			S2.invalidate();
			Unicode::snprintf(S3Buffer,S3_SIZE,"%d",000);
			S3.invalidate();
			Unicode::snprintf(S4Buffer,S4_SIZE,"%d",000);
			S4.invalidate();
			Unicode::snprintf(S5Buffer,S5_SIZE,"%d",000);
			S5.invalidate();
			break;
	}

}
