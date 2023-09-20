#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP
#include <stdint.h>
#include <gui/model/Model.hpp>
#include <touchgfx/hal/Types.hpp>
class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void saveReading(uint8_t Distance){}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
