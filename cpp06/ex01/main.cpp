#include "Serializer.hpp"

int main(void)
{
	Data dataOb;
	dataOb.c = 0x11;
	dataOb.idx = 0x05;
	dataOb.info = 0xFFAD;

	
	std::cout << "Address of the Data object: " << &dataOb << std::endl;
	uintptr_t pt = Serializer::serialize(&dataOb);
	Data *ptrDataOb = Serializer::deserialize(pt);
	std::cout << "Address of the Data object: " << ptrDataOb << std::endl;

	if (&dataOb == ptrDataOb) {
		std::cout << static_cast<int>(dataOb.c) << " == " << static_cast<int>(ptrDataOb->c) << std::endl;
		std::cout << static_cast<int>(dataOb.idx) << " == " << static_cast<int>(ptrDataOb->idx) << std::endl;
		std::cout << dataOb.info << " == " << ptrDataOb->info << std::endl;
	} else	
		std::cout << "Error: Addresse aren't the same"  << std::endl;

	return(0);
}
