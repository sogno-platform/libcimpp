#ifndef CSCDynamics_H
#define CSCDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "HVDCDynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class CsConverter;

	/*
	CSC function block whose behaviour is described by reference to a standard model <font color="#0f0f0f">or by definition of a user-defined model.</font>
	*/
	class CSCDynamics : public HVDCDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		CSCDynamics();
		~CSCDynamics() override;

		CIMPP::CsConverter* CSConverter;  /* Current source converter to which current source converter dynamics model applies. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CSCDynamics_factory();
}
#endif
