#ifndef WindTurbineType3or4IEC_H
#define WindTurbineType3or4IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4Dynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindContCurrLimIEC;
	class WindContQIEC;
	class WindContQLimIEC;
	class WindContQPQULimIEC;
	class WindProtectionIEC;
	class WindRefFrameRotIEC;

	/*
	Parent class supporting relationships to IEC wind turbines type 3 and type 4 including their control models.
	*/
	class WindTurbineType3or4IEC : public WindTurbineType3or4Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3or4IEC();
		~WindTurbineType3or4IEC() override;

		CIMPP::WindContQIEC* WIndContQIEC;  /* Wind control Q model associated with this wind turbine type 3 or type 4 model. Default: 0 */
		CIMPP::WindContCurrLimIEC* WindContCurrLimIEC;  /* Wind control current limitation model associated with this wind turbine type 3 or type 4 model. Default: 0 */
		CIMPP::WindContQLimIEC* WindContQLimIEC;  /* Constant Q limitation model associated with this wind generator type 3 or type 4 model. Default: 0 */
		CIMPP::WindContQPQULimIEC* WindContQPQULimIEC;  /* QP and QU limitation model associated with this wind generator type 3 or type 4 model. Default: 0 */
		CIMPP::WindProtectionIEC* WindProtectionIEC;  /* Wind turbune protection model associated with this wind generator type 3 or type 4 model. Default: 0 */
		CIMPP::WindRefFrameRotIEC* WindRefFrameRotIEC;  /* Reference frame rotation model associated with this wind turbine type 3 or type 4 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType3or4IEC_factory();
}
#endif
