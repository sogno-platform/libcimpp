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
#include "Integer.hpp"
#include "Simple_Float.hpp"
#include "WindLookupTableFunctionKind.hpp"

namespace CIMPP
{
	class WindContCurrLimIEC;
	class WindContPType3IEC;
	class WindContRotorRIEC;
	class WindPlantFreqPcontrolIEC;

	/*
	The class models a look up table for the purpose of wind standard models.
	*/
	class WindDynamicsLookupTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindDynamicsLookupTable();
		~WindDynamicsLookupTable() override;

		CIMPP::WindContCurrLimIEC* WindContCurrLimIEC;  /* The wind dynamics lookup table associated with this current control limitation model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;  /* The wind dynamics lookup table associated with this P control type 3 model. Default: 0 */
		CIMPP::WindContRotorRIEC* WindContRotorRIEC;  /* The rotor resistance control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC;  /* The wind dynamics lookup table associated with this frequency and active power wind plant model. Default: 0 */
		CIMPP::Simple_Float input;  /* Input value (x) for the lookup table function. Default: nullptr */
		CIMPP::WindLookupTableFunctionKind lookupTableFunctionType;  /* Type of the lookup table function. Default: 0 */
		CIMPP::Simple_Float output;  /* Output value (y) for the lookup table function. Default: nullptr */
		CIMPP::Integer sequence;  /* Sequence numbers of the pairs of the input (x) and the output (y) of the lookup table function. Default: 0 */

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
