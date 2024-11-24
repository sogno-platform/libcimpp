#ifndef WaveTrap_H
#define WaveTrap_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "AuxiliaryEquipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	Line traps are devices that impede high frequency power line carrier signals yet present a negligible impedance at the main power frequency.
	*/
	class WaveTrap : public AuxiliaryEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		WaveTrap();
		~WaveTrap() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WaveTrap_factory();
}
#endif
