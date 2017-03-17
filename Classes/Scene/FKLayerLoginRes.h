/********************************************************************
	created:	2016/07/19
	filename: 	FKLayerLoginRes
	author:		FreeKnight
	
	purpose:	
*********************************************************************/
#pragma once
//------------------------------------------------------------
#include "../Base/FKBaseMacros.h"
//------------------------------------------------------------
#define FK_LOGINLAYER_LOGINBACK_LAYOUT_TAG						(2000000)
#define FK_LOGINLAYER_ACCOUNT_EDIT_TAG							(FK_LOGINLAYER_LOGINBACK_LAYOUT_TAG + 1)
#define FK_LOGINLAYER_PASSWORD_EDIT_TAG							(FK_LOGINLAYER_LOGINBACK_LAYOUT_TAG + 2)

#define FK_LOGINLAYER_REG_LAYOUT_TAG							(2100000)
#define FK_LOGINLAYER_REGACCOUNT_EDIT_TAG						(FK_LOGINLAYER_REG_LAYOUT_TAG + 1)
#define FK_LOGINLAYER_REGNICKNAME_EDIT_TAG						(FK_LOGINLAYER_REG_LAYOUT_TAG + 2)
#define FK_LOGINLAYER_REGPASSWORD_EDIT_TAG						(FK_LOGINLAYER_REG_LAYOUT_TAG + 3)
#define FK_LOGINLAYER_REGSUBPASSWORD_EDIT_TAG					(FK_LOGINLAYER_REG_LAYOUT_TAG + 4)
//------------------------------------------------------------
#define Res_String_CN_SceneLogin_NewPageUrl						"http://duzhi5368.blog.163.com/ios/version.php?ver=%s"
#ifdef	SINGLE_MODEL
#define Res_String_CN_SceneLogin_LoginSvrIP						"127.0.0.1"
#else
#define Res_String_CN_SceneLogin_LoginSvrIP						"duzhi5368.blog.163.com"
#endif
#define Res_String_CN_SceneLogin_LoginSvrPort					8100
//------------------------------------------------------------
#define Res_String_CN_SceneLogin_InsertAccout					"�����˺�"
#define Res_String_CN_SceneLogin_InsertPassword					"��������"

#define Res_String_CN_SceneLogin_RegAccout						"�����˺�"
#define Res_String_CN_SceneLogin_RegNickName					"�����ǳ�"
#define Res_String_CN_SceneLogin_RegPassword					"��������"
#define Res_String_CN_SceneLogin_RegSubPassword					"��������"

#define Res_String_CN_SceneLogin_RegMsgbox_Title				"ע����ʾ"
#define Res_String_CN_SceneLogin_RegMsgbox_ErrPW				"�������¼����(5-32λ)"
#define Res_String_CN_SceneLogin_RegMsgbox_ErrName				"�������˻�(5-24λ)"

#define Res_String_CN_SceneLogin_LoginMsgbox_Title				"��¼��ʾ"
#define Res_String_CN_SceneLogin_LoginMsgbox_ErrPWorName		"��������ȷ���ʺź�����"
#define Res_String_CN_SceneLogin_LoginResultMsgBox_ErrTitle		"��¼ʧ��"
#define Res_String_CN_SceneLogin_LoginResultMsgBox_ErrPWorName	"�˺Ż��������"
#define Res_String_CN_SceneLogin_LoginResultMsgBox_NoticeTitle	"��¼��ʾ"
#define Res_String_CN_SceneLogin_LoginResultMsgBox_UpdateVer	"��Ϸ�汾��Ҫ����,���ذ汾Ϊ %d,���°汾Ϊ %d,����º��ٴε�¼��Ϸ"
//------------------------------------------------------------
#define Res_Image_CN_SceneLogin_BK								"Scene/Login/LoginSceneBack.png"
#define Res_Image_CN_SceneLogin_LoginPanelBK					"Scene/Login/LoginBack.png"
#define Res_Image_CN_SceneLogin_RegPanelBK						"Scene/Login/RegBack.png"

#define Res_Image_CN_SceneLogin_EditBox							"Editbox.png"	

#define Res_Image_CN_SceneLogin_BtnLogin_Normal					"Scene/Login/BtnLogin0.png"
#define Res_Image_CN_SceneLogin_BtnLogin_Down					"Scene/Login/BtnLogin1.png"
#define Res_Image_CN_SceneLogin_BtnReg_Normal					"Scene/Login/BtnReg0.png"
#define Res_Image_CN_SceneLogin_BtnReg_Down						"Scene/Login/BtnReg1.png"
#define Res_Image_CN_SceneLogin_BtnClose_Normal					"BtnClose0.png"
#define Res_Image_CN_SceneLogin_BtnClose_Down					"BtnClose1.png"

#define Res_Image_CN_SceneLogin_BtnOK_Normal					"Scene/Login/BtnOk0.png"
#define Res_Image_CN_SceneLogin_BtnOK_Down						"Scene/Login/BtnOk1.png"
#define Res_Image_CN_SceneLogin_BtnReturn_Normal				"Scene/Login/BtnReturn0.png"
#define Res_Image_CN_SceneLogin_BtnReturn_Down					"Scene/Login/BtnReturn1.png"

#define Res_Image_SceneLogin_SnowParticle						"Scene/Login/Particles/Snow.png"
//------------------------------------------------------------