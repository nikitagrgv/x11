#pragma once

#include "TypesRegister.h"

class Event
{
public:
	explicit Event(int type)
		: type_(type)
	{}
	virtual ~Event() = default;

	inline int getType() const { return type_; }

private:
	int type_{-1};
};

template<class T>
class EventTemplate : public Event
{
public:
	EventTemplate()
		: Event(TypesRegister::getId<T>())
	{}
};

template<class T>
inline T *event_cast(Event *event)
{
	if (event->getType() == TypesRegister::getId<T>())
	{
		return static_cast<T *>(event);
	}
	return nullptr;
}
