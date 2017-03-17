/********************************************************************
	created:	2016/07/16
	filename: 	FKEventMacros
	author:		FreeKnight
	
	purpose:	
*********************************************************************/
#pragma once
//------------------------------------------------------------
// socket event
#define EVENT_SOCKET				"FKSocketEvent"
// massage box event
#define EVENT_MSGBOX				"FKMsgboxEvent"
// net connect timeout event
#define EVENT_NET_TIMEOUT			"FKNetTimeoutEvent"
//------------------------------------------------------------
static std::string Res_String_CN_Notify_ErrorSocket		= "���������������";
static std::string Res_String_CN_Notify_SocketOffline	= "�������ӶϿ�";
//------------------------------------------------------------
struct SSocketEvent
{
	enum ENUM_SocketEvent
	{
		eSocketEvent_None	= 0,
		eSocketEvent_SocketMsg,
		eSocketEvent_Offline,
	};
	ENUM_SocketEvent	m_eEventType;
	std::string			m_strMsg;

	SSocketEvent()
		: m_eEventType( eSocketEvent_None )
	{
		m_strMsg.clear();
	}
};
//------------------------------------------------------------
