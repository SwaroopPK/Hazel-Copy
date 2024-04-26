#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char **argv)
{
	printf("Starting Hazel Engine...");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Hazel only supported on Windows!!
#endif // HZ_PLATFORM_WINDOWS