#pragma once

#include "TypesRegister.h"

class Event
{
public:
	virtual ~Event() = default;

	virtual int getType() const = 0;
};

template<class T>
class EventTemplate : public Event
{
public:
	int getType() const final { return TypesRegister::getId<T>(); }
};
