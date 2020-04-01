#ifndef CIMFACTORY_HPP
#define CIMFACTORY_HPP

#include <string>
#include <unordered_map>
#include "BaseClass.hpp"

namespace CGMES
{
	class CIMFactory
	{
	public:
		CIMFactory();
		virtual ~CIMFactory();
		static CGMES::BaseClass* CreateNew(const std::string& name);
		static bool IsCIMClass(const std::string& name);
	
	private:
		static std::unordered_map<std::string, BaseClass* (*)()> factory_map;
	};
}
#endif // CIMFACTORY_HPP
