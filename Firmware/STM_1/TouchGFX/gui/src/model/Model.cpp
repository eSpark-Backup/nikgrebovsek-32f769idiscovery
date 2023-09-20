#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stdint.h>

extern uint8_t Distance;
extern uint8_t updateScreen;
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	if(updateScreen)
	{
		updateScreen = 0;
		modelListener->saveReading(Distance);
	}
}
