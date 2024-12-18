#ifndef MechLoad1_H
#define MechLoad1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "MechanicalLoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"

namespace CIMPP
{

	/*
	Mechanical load model type 1.
	*/
	class MechLoad1 : public MechanicalLoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		MechLoad1();
		~MechLoad1() override;

		CIMPP::Float a;  /* Speed squared coefficient (&lt;i&gt;a&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float b;  /* Speed coefficient (&lt;i&gt;b&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float d;  /* Speed to the exponent coefficient (&lt;i&gt;d&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float e;  /* Exponent (&lt;i&gt;e&lt;/i&gt;). Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* MechLoad1_factory();
}
#endif
