#ifndef SvStatus_H
#define SvStatus_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class ConductingEquipment;

	/*
	State variable for status.
	*/
	class SvStatus : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvStatus();
		~SvStatus() override;

		CIMPP::ConductingEquipment* ConductingEquipment;  /* The conducting equipment associated with the status state variable. Default: 0 */
		CIMPP::Boolean inService;  /* The in service status as a result of topology processing. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SvStatus_factory();
}
#endif
