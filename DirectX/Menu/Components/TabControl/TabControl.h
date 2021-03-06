﻿#pragma once
#include "../../../EventSystem/EventSystem.h"
#include "../../../DirectX/DirectX.h"
#include "../../Form/Form.h"
#include "../../../EventSystem/Events/MouseEvents/MouseEvent.h"
#include "Tab/Tab.h"

class TabControl : public Renderable, protected MouseEvent
{
	Form* Parent;	

	float TabControlWidth;

	D3DCOLOR BackgroundColor;
	D3DCOLOR TabBackgroundColor;
	D3DCOLOR SelectedTabColor;
	D3DCOLOR TextColor;

	BYTE ActiveTab;


	std::vector< Tab* > Tabs;
	

	TabControl( );

public:
	
	TabControl( Form* Parent, float TabControlWidth, D3DCOLOR TabBackgroundColor, D3DCOLOR SelectedTabColor, D3DCOLOR TextColor );


	~TabControl( );


	void AddTab( Tab* Object );


	const Form* GetParent( );


	float GetTabControlWidth( );

	float GetTabControlHeight( );

	
	float GetBoundsXStart( ) override;

	float GetBoundsYStart( ) override;


	float GetBoundsXEnd( ) override;

	float GetBoundsYEnd( ) override;


	BYTE GetActiveTab( );


	D3DCOLOR GetBackgroundColor( );

	D3DCOLOR GetTabBackgroundColor( );

	D3DCOLOR GetSelectedTabColor( );

	D3DCOLOR GetTextColor( );

	
	void RenderObject( ) override;

	void UpdateVertecies( ) override;


	bool OnMouseDown( POINT, MouseButton ) override;

	bool OnMouseUp( POINT, MouseButton ) override;

	bool OnMouseMove( POINT, MouseButton ) override;
};