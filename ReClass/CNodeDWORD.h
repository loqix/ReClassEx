#pragma once

#include "CNodeBase.h"

class CNodeDWORD : public CNodeBase
{
public:
	CNodeDWORD( );

	virtual void Update( HotSpot& Spot );

	virtual int GetMemorySize( ) { return sizeof( unsigned long ); }

	virtual int Draw( ViewInfo& View, int x, int y );
};