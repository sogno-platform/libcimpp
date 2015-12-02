///////////////////////////////////////////////////////////
//  Float.h
//  Implementation of the Class Float
//  Created on:      27-Nov-2015 11:06:32
///////////////////////////////////////////////////////////

#if !defined(EA_9C59ED45_FF6B_46d2_ACD9_9C979E9B99EA__INCLUDED_)
#define EA_9C59ED45_FF6B_46d2_ACD9_9C979E9B99EA__INCLUDED_

/**
 * A floating point number. The range is unspecified and not limited.
 */
class Float
{

public:
	Float();
	Float(double value);

	Float& operator=(double &rop);
	operator double();

	double value;
};
#endif // !defined(EA_9C59ED45_FF6B_46d2_ACD9_9C979E9B99EA__INCLUDED_)
