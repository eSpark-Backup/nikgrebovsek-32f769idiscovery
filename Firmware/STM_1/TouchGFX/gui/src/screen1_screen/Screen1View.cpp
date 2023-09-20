#include <gui/screen1_screen/Screen1View.hpp>
#include <stdint.h>

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
	Unicode::snprintf(textArea1Buffer,TEXTAREA1_SIZE,"%d",Distance);
	textArea1.invalidate();
}
