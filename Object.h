#pragma once

class Object
{

public:
	float x;			//xÀ•W
	float y;			//yÀ•W
	float width;		//•
	float height;		//‚‚³

	enum class CState
	{
		NORMAL,
		DIE
	};

	CState State;

};