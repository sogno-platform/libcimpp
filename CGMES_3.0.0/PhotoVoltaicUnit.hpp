#ifndef PhotoVoltaicUnit_H
#define PhotoVoltaicUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerElectronicsUnit.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A photovoltaic device or an aggregation of such devices.
	*/
	class PhotoVoltaicUnit : public PowerElectronicsUnit
	{
	public:
		/* constructor initialising all attributes to null */
		PhotoVoltaicUnit();
		~PhotoVoltaicUnit() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhotoVoltaicUnit_factory();
}
#endif
