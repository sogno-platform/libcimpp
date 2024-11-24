#ifndef PhaseTapChangerSymmetrical_H
#define PhaseTapChangerSymmetrical_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PhaseTapChangerNonLinear.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	Describes a symmetrical phase shifting transformer tap model in which the secondary side voltage magnitude is the same as at the primary side. The difference voltage magnitude is the base in an equal-sided triangle where the sides corresponds to the primary and secondary voltages. The phase angle difference corresponds to the top angle and can be expressed as twice the arctangent of half the total difference voltage.
	*/
	class PhaseTapChangerSymmetrical : public PhaseTapChangerNonLinear
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerSymmetrical();
		~PhaseTapChangerSymmetrical() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChangerSymmetrical_factory();
}
#endif
