#include "Serializer.hpp"

int main(void)
{
	Data dataOb;
	dataOb.c = 0x11;
	dataOb.idx = 0x05;
	dataOb.info = 0xFFAD;

	Serializer serializedOb;
	
	std::cout << "Address of the Data object: " << &dataOb << std::endl;
	Data *ptrDataOb = serializedOb.deserialize(serializedOb.serialize(&dataOb));
	std::cout << "Address of the Data object: " << ptrDataOb << std::endl;

	if (&dataOb == ptrDataOb) {
		std::cout << static_cast<int>(dataOb.c) << " == " << static_cast<int>(ptrDataOb->c) << std::endl;
		std::cout << static_cast<int>(dataOb.idx) << " == " << static_cast<int>(ptrDataOb->idx) << std::endl;
		std::cout << dataOb.info << " == " << ptrDataOb->info << std::endl;
	} else	
		std::cout << "Error: Addresse aren't the same"  << std::endl;

	return(0);
}
