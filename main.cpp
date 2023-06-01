#include <iostream>

#include <X11/Xlib.h>

#include "TypesRegister.h"

#include "Event.h"

int main()
{

	class A1 : public EventTemplate<A1>
	{
	};
	class A2 : public EventTemplate<A2>
	{
	};
	class A3 : public EventTemplate<A3>
	{
	};
	class A4 : public EventTemplate<A4>
	{
	};

	auto a1 = new A1();
	auto a2 = new A2();
	auto a3 = new A3();
	auto a4 = new A4();

	auto a5 = new A1();

	std::cout << "a1 " << a1->getType() << std::endl;
	std::cout << "a2 " << a2->getType() << std::endl;
	std::cout << "a3 " << a3->getType() << std::endl;
	std::cout << "a4 " << a4->getType() << std::endl;

	std::cout << "a5 " << a5->getType() << std::endl;


	//#define PRINT_TYPE(type) \
//	std::cout << #type << " " <<  TypesRegister::getId<type>() << std::endl
//
//
//	class GGG
//	{
//
//	};
//	class AAA{
//
//	};
//
//	PRINT_TYPE(int);
//	PRINT_TYPE(char);
//	PRINT_TYPE(double);
//	PRINT_TYPE(const double);
//	PRINT_TYPE(int);
//	PRINT_TYPE(double *);
//	PRINT_TYPE(GGG);
//	PRINT_TYPE(AAA);
//	PRINT_TYPE(GGG);


	//	Display *display = XOpenDisplay(nullptr);
//
//	int screen = DefaultScreen(display);
//
//	Window window = XCreateSimpleWindow(display, RootWindow(display, screen), 10, 10, 500, 500, 1,
//		0x501040, 0x305020);
//	XSelectInput(display, window, ExposureMask | KeyPressMask | FocusChangeMask );
//	XMapWindow(display, window);
//
//	{
//		Window window2 = XCreateSimpleWindow(display, window, 20, 20, 50, 50,
//			0, 0x501040, 0x702020);
//			XSelectInput(display, window2, ExposureMask | KeyPressMask | FocusChangeMask | PointerMotionMask);
//		XMapWindow(display, window2);
//	}
//
//
//	while (true)
//	{
//		XEvent event;
//		XNextEvent(display, &event);
//
//        std::cout << event.xkey.time << " " << event.type << std::endl;
//
//		if (event.type == Expose)
//		{
//
//		}
//		if (event.type == KeyPress)
//		{
//
//			XKeyEvent e = event.xkey;
//			std::cout << "keypress: " << e.keycode << std::endl;
//		}
//	}
//
//
//	return 0;
}
