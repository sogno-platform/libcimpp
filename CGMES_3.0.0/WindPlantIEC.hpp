#ifndef WindPlantIEC_H
#define WindPlantIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindPlantDynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindPlantFreqPcontrolIEC;
	class WindPlantReactiveControlIEC;

	/*
	Simplified IEC type plant level model.  Reference: IEC 61400-27-1:2015, Annex D.
	*/
	class WindPlantIEC : public WindPlantDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantIEC();
		~WindPlantIEC() override;

		CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC;  /* Wind plant frequency and active power control model associated with this wind plant. Default: 0 */
		CIMPP::WindPlantReactiveControlIEC* WindPlantReactiveControlIEC;  /* Wind plant model with which this wind reactive control is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindPlantIEC_factory();
}
#endif
