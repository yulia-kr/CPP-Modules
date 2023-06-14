#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer(const Serializer &copy) {
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &rhs) {
	(void) rhs;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return ((reinterpret_cast<uintptr_t>(ptr)));
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data *data_ptr;

	data_ptr = reinterpret_cast<Data *>(raw);
	return (data_ptr);
}