#ifndef PhaseTapChanger_H
#define PhaseTapChanger_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TapChanger.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class TransformerEnd;

	/*
	A transformer phase shifting tap model that controls the phase angle difference across the power transformer and potentially the active power flow through the power transformer.  This phase tap model may also impact the voltage magnitude.
	*/
	class PhaseTapChanger : public TapChanger
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChanger();
		~PhaseTapChanger() override;

		CIMPP::TransformerEnd* TransformerEnd;  /* Phase tap changer associated with this transformer end. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChanger_factory();
}
#endif
