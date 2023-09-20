#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stdint.h>

extern uint8_t distance[5];
extern uint8_t updateScreen;
extern uint8_t serialNumber;
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
//	updateScreen = 0;
//	modelListener->saveReading(Distance);
	if(updateScreen)
	{
		updateScreen = 0;
		modelListener->saveReading(distance[serialNumber]);
		serialNumber++;
	}
}
