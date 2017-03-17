/********************************************************************
	created:	2016/08/02
	filename: 	FKGameUserManager
	author:		FreeKnight
	
	purpose:	
*********************************************************************/
#pragma once
//------------------------------------------------------------
#include "../Interface/IGameUserInfoMgr.h"
//------------------------------------------------------------
class CFKGameUserManager 
{
public:
	CFKGameUserManager();
	~CFKGameUserManager();

public:
	bool				SetGameUserMgr(IFKGameUserMgr* pGameUserInfoMgr);
	bool				ResetUserManager();
	bool				DeleteUserInfo(IFKGameUserInfo* pGameUserItem);
	bool				DeleteUserInfo(DWORD dwUserID);
	IFKGameUserInfo*	ActiveUserItem(SFKUserTotalInfo* pUserInfo);
	bool				UpdateUserItemScore(IFKGameUserInfo* pGameUserItem, 
		tagUserScore* pUserScore);
	//������ҷ���
	bool UpdateUserItemScore(DWORD dwUserID, tagUserScore* pUserScore);
	//�������״̬
	bool UpdateUserItemStatus(IGameUserItem* pGameUserItem, BYTE cbUserStatus);
	//������ҷ���
	bool UpdateUserItemStatus(DWORD dwUserID, BYTE cbUserStatus);
	//��ȡ��Ӧ��λ�������Ϣ
	IGameUserItem* GetTableUserItem(WORD wChairID);

	//ͨ�����ID�������
	IGameUserItem* SearchUserItemByUserID(DWORD dwUserID);

	//��Ա����
private:
	GameUserItem*										m_GameUserItem[MAX_CHAIR];	//�������;
	GameUserItemVector									m_vctLookOnUser;			//�Թ����
	GameUserItemVector									m_vctStorageUser;			//�洢���

	IGameUserManagerSink*								m_pGameUserManagerSink;		//ClientKernelָ��
};

