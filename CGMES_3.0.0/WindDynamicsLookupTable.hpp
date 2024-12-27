#ifndef WindDynamicsLookupTable_H
#define WindDynamicsLookupTable_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "WindLookupTableFunctionKind.hpp"

namespace CIMPP
{
	class WindContCurrLimIEC;
	class WindContPType3IEC;
	class WindContQPQULimIEC;
	class WindContRotorRIEC;
	class WindGenType3bIEC;
	class WindPitchContPowerIEC;
	class WindPlantFreqPcontrolIEC;
	class WindPlantReactiveControlIEC;
	class WindProtectionIEC;

	/*
	Look up table for the purpose of wind standard models.
	*/
	class WindDynamicsLookupTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindDynamicsLookupTable();
		~WindDynamicsLookupTable() override;

		CIMPP::WindContCurrLimIEC* WindContCurrLimIEC;  /* The current control limitation model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;  /* The P control type 3 model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContQPQULimIEC* WindContQPQULimIEC;  /* The QP and QU limitation model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContRotorRIEC* WindContRotorRIEC;  /* The rotor resistance control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindGenType3bIEC* WindGenType3bIEC;  /* The generator type 3B model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPitchContPowerIEC* WindPitchContPowerIEC;  /* The pitch control power model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC;  /* The frequency and active power wind plant control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPlantReactiveControlIEC* WindPlantReactiveControlIEC;  /* The voltage and reactive power wind plant control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindProtectionIEC* WindProtectionIEC;  /* The grid protection model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::Float input;  /* Input value (&lt;i&gt;x&lt;/i&gt;) for the lookup table function. Default: 0.0 */
		CIMPP::WindLookupTableFunctionKind lookupTableFunctionType;  /* Type of the lookup table function. Default: 0 */
		CIMPP::Float output;  /* Output value (&lt;i&gt;y&lt;/i&gt;) for the lookup table function. Default: 0.0 */
		CIMPP::Integer sequence;  /* Sequence numbers of the pairs of the input (&lt;i&gt;x&lt;/i&gt;) and the output (&lt;i&gt;y&lt;/i&gt;) of the lookup table function. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* WindDynamicsLookupTable_factory();
}
#endif
