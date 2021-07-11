#include <SampleStaticLibraryD.h>
#include <iostream>
#include <SampleStaticLibraryB.h>
#include <SampleStaticLibraryC.h>

namespace SampleStaticLibraryD {

void SampleStaticLibraryD::HelloWorld() {
	SampleStaticLibraryB::SampleStaticLibraryB::HelloWorld();
	SampleStaticLibraryC::SampleStaticLibraryC::HelloWorld();
	std::cout << "Hello, world! This is SampleStaticLibraryD!!" << std::endl;
}

}
