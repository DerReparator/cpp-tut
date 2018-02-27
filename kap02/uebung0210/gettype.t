#ifndef GETTYPE_T
#define GETTYPE_T

#include <string>

template<typename T>
std::string getType(const T t){
	return "unbekannter Typ!";
}

template<>
std::string getType<int>(const int t){
	return "int";
}

template<>
std::string getType<unsigned int>(const unsigned int t){
	return "unsigned int";
}

template<>
std::string getType<char>(const char t){
	return "char";
}

template<>
std::string getType<bool>(const bool t){
	return "bool";
}
#endif