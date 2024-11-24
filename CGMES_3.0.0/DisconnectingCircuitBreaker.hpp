#ifndef DisconnectingCircuitBreaker_H
#define DisconnectingCircuitBreaker_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Breaker.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A circuit breaking device including disconnecting function, eliminating the need for separate disconnectors.
	*/
	class DisconnectingCircuitBreaker : public Breaker
	{
	public:
		/* constructor initialising all attributes to null */
		DisconnectingCircuitBreaker();
		~DisconnectingCircuitBreaker() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DisconnectingCircuitBreaker_factory();
}
#endif
