#include <iostream>

#include <X11/Xlib.h>

int main()
{
	Display *display = XOpenDisplay(nullptr);

	int screen = DefaultScreen(display);

	Window window = XCreateSimpleWindow(display, RootWindow(display, screen), 10, 10, 500, 500, 1,
		0x501040, 0x305020);
//	XSelectInput(display, window, ExposureMask | KeyPressMask);
	XMapWindow(display, window);

	{
		Window window2 = XCreateSimpleWindow(display, window, 20, 20, 50, 50,
			0, 0x501040, 0x702020);
		//	XSelectInput(display, window, ExposureMask | KeyPressMask);
		XMapWindow(display, window2);
	}


	while (true)
	{
		XEvent event;
		XNextEvent(display, &event);

		if (event.type == Expose)
		{

		}
		if (event.type == KeyPress)
		{

			XKeyEvent e = event.xkey;
			std::cout << "keypress: " << e.keycode << std::endl;
		}
	}


	return 0;
}
